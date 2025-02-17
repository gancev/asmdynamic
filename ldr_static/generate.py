def generate_asm_code(filename="main.c", num_functions=1000):
    with open(filename, "w") as f:
        # Write headers
        f.write("#include <stdio.h>\n#include <stdint.h>\n#include <stdlib.h>\n\n#include <unistd.h>\n\n"))

        # Define global memory for loading values
        f.write("uint64_t global_memory_values[{}] = {{\n".format(num_functions))
        f.write(", ".join(f"0x{hex(i)[2:].upper()}" for i in range(1, num_functions + 1)))
        f.write("\n};\n\n")

        # Define target functions
        for i in range(1, num_functions + 1):
            f.write(f"void target_func{i}(void *param, uint64_t loaded_value) {{\n")
            f.write(f"    printf(\"Target Function {i}: param = %p, loaded_value = 0x%lx\\n\", param, loaded_value);\n")
            f.write("}\n\n")

        # Define inline assembly functions (let C handle proper function calls)
        for i in range(1, num_functions + 1):
            f.write(f"""
static inline void execute_full_asm_block_var{i}(void (*target)(void*, uint64_t)) {{
    void *param;
    uint64_t loaded_value;
    __asm__ volatile (
        "mov x1, %1\\n\\t"       /* Load base address (memory pointer) */
        "ldr x2, [x1]\\n\\t"     /* Load value from memory into x2 */
        "mov x1, #{i}\\n\\t"     /* Load immediate {i} into x1 */
        "add x0, sp, x1\\n\\t"   /* Compute x0 = sp + {i} */
        : "=r"(param), "=r"(loaded_value) /* Outputs: param and loaded_value */
        : "r"(&global_memory_values[{i-1}]) /* Input: memory address */
        : "x0", "x1", "x2"
    );
    /* Proper C function call (no direct blr) */
    target(param, loaded_value);
}}\n""")

        # Write main function
        f.write("\nint main(void) {\n")
        for i in range(1, num_functions + 1):
            f.write(f"    execute_full_asm_block_var{i}(target_func{i});\n")
        f.write("    return 0;\n}\n")

    print(f"✅ Successfully generated {filename} with {num_functions} variations!")

# Run the function to generate the file
generate_asm_code()