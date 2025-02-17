def generate_asm_with_eor_only(filename="main.c", num_functions=1000):
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
            f.write(f"""
void target_func{i}(void *param, uint64_t loaded_value, uint64_t xor_result) {{
    printf("Target Function {i}: param = %p, loaded_value = 0x%lx, xor_result = 0x%lx\\n",
           param, loaded_value, xor_result);
}}\n\n""")

        # Define inline assembly functions using only EOR (XOR)
        for i in range(1, num_functions + 1):
            f.write(f"""
static inline void execute_full_asm_block_var{i}(void (*target)(void*, uint64_t, uint64_t)) {{
    void *param;
    uint64_t loaded_value, xor_result;

    __asm__ volatile (
        "ldr x2, [%2]\\n\\t"         /* Load from memory into x2 */
        "mov x3, #{i * 10}\\n\\t"    /* Load immediate {i*10} */
        "eor x4, x2, x3\\n\\t"       /* XOR loaded value with immediate */
        "str x4, [%3]\\n\\t"         /* Store XOR result */
        "mov %0, x2\\n\\t"           /* Store loaded_value in output */
        "mov %1, x4\\n\\t"           /* Store xor_result in output */
        : "=r"(loaded_value), "=r"(xor_result)
        : "r"(&global_memory_values[{i-1}]), "r"(&global_memory_results[{i-1}])
        : "x2", "x3", "x4", "memory"
    );

    /* Call the target function with results */
    target(param, loaded_value, xor_result);
}}\n""")

        # Write main function
        f.write("\nint main(void) {\n")
        for i in range(1, num_functions + 1):
            f.write(f"    execute_full_asm_block_var{i}(target_func{i});\n")
        f.write("    return 0;\n}\n")

    print(f"✅ Successfully generated {filename} with {num_functions} functions using EOR-only ARMv8 instructions.")

# Run the function to generate the file
generate_asm_with_eor_only()