import random

def generate_simplified_asm(filename="main.c", num_blocks=5, num_variations=1000):
    operations = ["add", "sub", "mul"]

    with open(filename, "w") as f:
        # Write headers
        f.write("#include <stdio.h>\n#include <stdint.h>\n#include <stdlib.h>\n#include <unistd.h>\n\n")

        # Define global memory arrays
        f.write(f"uint64_t global_memory_values[{num_variations}] = {{\n")
        f.write(", ".join(str(i * 100) for i in range(1, num_variations + 1)))
        f.write("\n};\n\n")

        f.write(f"uint64_t global_memory_results[{num_variations}] = {{0}};\n\n")

        # Define target functions
        for block in range(1, num_blocks + 1):
            for i in range(1, num_variations + 1):
                f.write(f"""
void target_func{block}_{i}(uint64_t sum_result, uint64_t mul_result) {{
    printf("Block {block} - Function {i}: sum = 0x%llx, mul = 0x%llx\\n",
           (unsigned long long)sum_result, 
           (unsigned long long)mul_result);
}}\n\n""")

        # Define inline assembly functions with simple operations
        for block in range(1, num_blocks + 1):
            for i in range(1, num_variations + 1):
                const1 = random.randint(5, 100)
                const2 = random.randint(5, 100)
                op1, op2 = random.sample(operations, 2)

                f.write(f"""
static inline void execute_asm_block_{block}_{i}(void (*target)(uint64_t, uint64_t)) {{
    uint64_t sum_result = 0, mul_result = 0;
    uint64_t *mem_addr = &global_memory_values[{i-1}];
    uint64_t *res_addr = &global_memory_results[{i-1}];

    __asm__ volatile (
        "ldr x1, [%2]\\n\\t"        /* Load value from memory */
        "mov x2, #{const1}\\n\\t"   /* Load first constant */
        "mov x3, #{const2}\\n\\t"   /* Load second constant */

        /* Simple Basic Block */
        "{op1} x4, x1, x2\\n\\t"     /* Perform first operation */
        "{op2} x5, x4, x3\\n\\t"     /* Perform second operation */

        "str x5, [%3]\\n\\t"        /* Store result */

        /* Store results into output variables */
        "mov %0, x4\\n\\t"          /* Store sum result */
        "mov %1, x5\\n\\t"          /* Store multiplication result */

        : "=r"(sum_result), "=r"(mul_result)
        : "r"(mem_addr), "r"(res_addr)
        : "x1", "x2", "x3", "x4", "x5", "memory"
    );

    /* Call the target function with results */
    target(sum_result, mul_result);
}}\n""")

        # Write main function with sleep before and after
        f.write("""
int main(void) {
    printf("Sleeping for 10 seconds before execution...\\n");
    sleep(10);


        for (int i = 1; i <= 50; i++) {
""")

        for block in range(1, num_blocks + 1):
            for i in range(1, num_variations + 1):
                f.write(f"            execute_asm_block_{block}_{i}(target_func{block}_{i});\n")

        f.write("""
        }
    

    printf("Sleeping for 10 seconds after execution...\\n");
    sleep(10);
    return 0;
}
""")

    print(f"✅ Successfully generated {filename} with 5x{num_variations} simple block variations.")

# Run the function to generate the file
generate_simplified_asm("main.c")
