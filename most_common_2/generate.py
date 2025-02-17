def generate_asm_bitwise_mul_sub_fixed(filename="main.c", num_functions=1000):
    with open(filename, "w") as f:
        # Write headers
        f.write("#include <stdio.h>\n#include <stdint.h>\n#include <stdlib.h>\n\n")

        # Define global memory arrays
        f.write(f"uint64_t global_memory_values[{num_functions}] = {{\n")
        f.write(", ".join(str(i * 100) for i in range(1, num_functions + 1)))
        f.write("\n};\n\n")

        f.write(f"uint64_t global_memory_results[{num_functions}] = {{0}};\n\n")

        # Define target functions
        for i in range(1, num_functions + 1):
            f.write(f"""
void target_func{i}(void *param, uint64_t loaded_value, uint64_t mul_result, uint64_t bitwise_result) {{
    printf("Target Function {i}: param = %p, loaded_value = 0x%lx, mul_result = 0x%lx, bitwise_result = 0x%lx\\n",
           param, loaded_value, mul_result, bitwise_result);
}}\n\n""")

        # Define inline assembly functions with bitwise, mul, sub, ldr
        for i in range(1, num_functions + 1):
            f.write(f"""
static inline void execute_full_asm_block_var{i}(void (*target)(void*, uint64_t, uint64_t, uint64_t)) {{
    void *param;
    uint64_t loaded_value, mul_result, bitwise_result;

    __asm__ volatile (
        "ldr x2, [%3]\\n\\t"         /* Load from memory into x2 */
        "mov x3, #{i * 5}\\n\\t"     /* Load immediate {i*5} */
        "mul x4, x2, x3\\n\\t"       /* Multiply loaded value by immediate */
        "sub x5, x4, #50\\n\\t"      /* Subtract 50 from multiplication result */

        /* Load immediate for AND/ORR using mov */
        "mov x9, #0xFF\\n\\t"        /* Load immediate for AND */
        "and x6, x5, x9\\n\\t"       /* AND with 0xFF */
        
        "mov x10, #0xAA\\n\\t"       /* Load immediate for ORR */
        "orr x7, x6, x10\\n\\t"      /* ORR with 0xAA */
        
        "eor x8, x7, x3\\n\\t"       /* XOR with immediate */

        "str x8, [%4]\\n\\t"         /* Store bitwise result */

        /* Store results into output variables */
        "mov %0, x2\\n\\t"           /* Store loaded_value */
        "mov %1, x4\\n\\t"           /* Store mul_result */
        "mov %2, x8\\n\\t"           /* Store bitwise_result */

        : "=r"(loaded_value), "=r"(mul_result), "=r"(bitwise_result)
        : "r"(&global_memory_values[{i-1}]), "r"(&global_memory_results[{i-1}])
        : "x2", "x3", "x4", "x5", "x6", "x7", "x8", "x9", "x10", "memory"
    );

    /* Call the target function with computed values */
    target((void *)loaded_value, loaded_value, mul_result, bitwise_result);
}}\n""")

        # Write main function
        f.write("\nint main(void) {\n")
        for i in range(1, num_functions + 1):
            f.write(f"    execute_full_asm_block_var{i}(target_func{i});\n")
        f.write("    return 0;\n}\n")

    print(f"✅ Successfully generated {filename} with {num_functions} functions using fixed ARMv8 assembly.")

# Run the function to generate the file
generate_asm_bitwise_mul_sub_fixed()