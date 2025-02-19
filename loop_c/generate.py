import random

def generate_random_asm(filename="asm_random_loops.c", num_functions=1000):
    with open(filename, "w") as f:
        # Write headers
        f.write("#include <stdio.h>\n#include <stdint.h>\n#include <stdlib.h>\n#include <unistd.h>\n\n")

        # Define global memory arrays
        f.write(f"uint64_t global_memory_values[{num_functions}] = {{\n")
        f.write(", ".join(str(i * 100) for i in range(1, num_functions + 1)))
        f.write("\n};\n\n")

        f.write(f"uint64_t global_memory_results[{num_functions}] = {{0}};\n\n")

        # Define target functions
        for i in range(1, num_functions + 1):
            f.write(f"""
void target_func{i}(uint64_t loop_sum, uint64_t xor_result, uint64_t final_value, uint64_t iteration_count) {{
    printf("Target Function {i}: iterations = %lu, loop_sum = 0x%lx, xor_result = 0x%lx, final_value = 0x%lx\\n",
           iteration_count, loop_sum, xor_result, final_value);
}}\n\n""")

        # Define inline assembly functions with random loops and constants
        for i in range(1, num_functions + 1):
            loop_count = random.randint(5, 100)  # Random loop iterations
            const1 = random.randint(1, 500)
            const2 = random.randint(1, 500)
            const3 = random.randint(1, 500)
            operations = random.sample(["add", "sub", "eor", "mul"], 3)

            f.write(f"""
static inline void execute_full_asm_block_var{i}(void (*target)(uint64_t, uint64_t, uint64_t, uint64_t)) {{
    uint64_t loop_sum = 0, xor_result = 0, final_value = 0, iteration_count = {loop_count};

    __asm__ volatile (
        "mov x0, #{loop_count}\\n\\t"   /* Load loop count */
        "mov x1, #0\\n\\t"             /* Initialize sum */
        "mov x2, #0\\n\\t"             /* Initialize XOR accumulator */
        "mov x3, #{const1}\\n\\t"      /* Load first constant */
        "mov x4, #{const2}\\n\\t"      /* Load second constant */
        "mov x5, #{const3}\\n\\t"      /* Load third constant */

        "1:\\n\\t"                     /* Loop Label */
        "{operations[0]} x1, x1, x3\\n\\t"   /* Random operation 1 */
        "{operations[1]} x2, x2, x4\\n\\t"   /* Random operation 2 */
        "{operations[2]} x3, x3, x5\\n\\t"   /* Random operation 3 */
        "subs x0, x0, #1\\n\\t"       /* Decrement loop counter */
        "cbnz x0, 1b\\n\\t"           /* Continue loop if not zero */

        "ldr x6, [%2]\\n\\t"          /* Load value from memory */
        "mul x7, x6, x4\\n\\t"        /* Multiply memory value with constant */
        "str x7, [%3]\\n\\t"          /* Store result into results memory */

        /* Store results into output variables */
        "mov %0, x1\\n\\t"             /* Store loop_sum */
        "mov %1, x2\\n\\t"             /* Store xor_result */
        "mov %2, x7\\n\\t"             /* Store final_value */

        : "=r"(loop_sum), "=r"(xor_result), "=r"(final_value)
        : "r"(&global_memory_values[{i-1}]), "r"(&global_memory_results[{i-1}])
        : "x0", "x1", "x2", "x3", "x4", "x5", "x6", "x7", "memory"
    );

    /* Call the target function with results */
    target(loop_sum, xor_result, final_value, iteration_count);
}}\n""")

        # Write main function with sleep before and after
        f.write("""
int main(void) {
    printf("Sleeping for 10 seconds before execution...\\n");
    sleep(10);

    for (int i = 1; i <= 100; i++) {
""")

        for i in range(1, num_functions + 1):
            f.write(f"        execute_full_asm_block_var{i}(target_func{i});\n")

        f.write("""
    printf("Sleeping for 10 seconds after execution...\\n");
    sleep(10);
    return 0;
}
                }
""")

    print(f"✅ Successfully generated {filename} with 1000 functions using random loops and constants.")

# Run the function to generate the file
generate_random_asm("main.c")