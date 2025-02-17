def generate_asm_code(filename="main.c", num_functions=1000):
    with open(filename, "w") as f:
        # Write headers
        f.write("#include <stdio.h>\n#include <stdint.h>\n#include <stdlib.h>\n\n#include <unistd.h>\n\n")

        # Define global memory arrays
        f.write(f"uint64_t global_memory_values[{num_functions}] = {{\n")
        f.write(", ".join(str(i * 100) for i in range(1, num_functions + 1)))
        f.write("\n};\n\n")

        f.write(f"uint64_t global_memory_results[{num_functions}] = {{0}};\n\n")

        # Define target functions
        for i in range(1, num_functions + 1):
            f.write(f"void target_func{i}(void *param, uint64_t loaded_value, uint64_t stored_value) {{\n")
            f.write(f"    printf(\"Target Function {i}: param = %p, loaded_value = 0x%lx, stored_value = 0x%lx\\n\", param, loaded_value, stored_value);\n")
            f.write("}\n\n")

        # Define inline assembly functions with sub, mov, ldr, str
        for i in range(1, num_functions + 1):
            f.write(f"""
static inline void execute_full_asm_block_var{i}(void (*target)(void*, uint64_t, uint64_t)) {{
    void *param;
    uint64_t loaded_value;
    
    __asm__ volatile (
        "mov x1, %2\\n\\t"       /* Load memory address for reading */
        "ldr x2, [x1]\\n\\t"     /* Load from global_memory_values into x2 */
        "mov x1, #{i * 10}\\n\\t"/* Load immediate with {i * 10} */
        "sub x0, sp, x1\\n\\t"   /* Compute x0 = sp - immediate */
        "mov x3, %3\\n\\t"       /* Load memory address for storing */
        "str x2, [x3]\\n\\t"     /* Store x2 value to global_memory_results */
        : "=r"(param), "=r"(loaded_value)
        : "r"(&global_memory_values[{i-1}]), "r"(&global_memory_results[{i-1}])
        : "x0", "x1", "x2", "x3"
    );

    /* Call the target function with computed and loaded values */
    target(param, loaded_value, global_memory_results[{i-1}]);
}}\n""")

        # Write main function
        f.write("\nint main(void) {\n")
        for i in range(1, num_functions + 1):
            f.write(f"    execute_full_asm_block_var{i}(target_func{i});\n")
        f.write("    return 0;\n}\n")

    print(f"✅ Successfully generated {filename} with {num_functions} variations (`sub`, `mov`, `ldr`, `str`).")

# Run the function to generate the file
generate_asm_code()