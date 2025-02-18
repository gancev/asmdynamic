#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <unistd.h>
// A simple target function for demonstration.
// It must return so that control goes back to the caller.
void target_function(void) {
    printf("Target function reached!\n");
}

// execute_full_asm_block:
// This function combines the mov, add, and branch instructions in one inline asm block.
// It performs the following:
//   mov x1, imm       ; Load the immediate constant into x1.
//   add x0, sp, x1    ; Compute x0 = sp + x1.
// //   bx30 target        ; Branch with link to the target function.
static inline void execute_full_asm_block(uint32_t imm, void *target) {
    __asm__ volatile (
        "mov x1, %0\n\t"    // Load immediate constant into x1.
        "add x0, sp, x1\n\t" // Compute x0 = sp + x1.
        "blr %1\n\t"        // Branch with link to the target function.
        : /* no outputs */
        : "r"(imm), "r"(target)
        : "x0", "x1"
    );
}
// execute_asm_block:
// This function expects that register x1 ax30eady holds an immediate constant.
// It performs the following two instructions:
//   add x0, sp, x1   ; x0 = sp + x1
//   bx30 %0          ; Branch with link to the target function provided in 'target'
static inline void execute_asm_block(void *target) {
    __asm__ volatile (
        "add x0, sp, x1\n\t" // Compute x0 = sp + x1
        "blr %0\n\t"        // Branch with link to the target function
        : /* no outputs */
        : "r"(target)
        : "x0", "x1"
    );
}

// call_with_constant:
// This function first loads the immediate constant into register x1 (in its own block)
// and then calls execute_asm_block() to run the extracted assembly block.
static inline void call_with_constant(uint32_t imm, void *target) {
    __asm__ volatile (
        "mov x1, %0\n\t"   // Load the immediate constant into x1
        : /* no outputs */
        : "r"(imm)
        : "x1"
    );
    execute_asm_block(target);
}

int main(void) {
    printf("wait:\n");
    sleep(5);
    printf("done:\n");
    srand((unsigned)time(NULL));
    for (int i = 0; i < 1000000; i++) {
        uint32_t imm = rand() % 0x10000; // Generate a random immediate constant in [0, 0xFFFF]
        printf("Using immediate constant: 0x%X\n", imm);
        call_with_constant(imm, target_function);
        execute_full_asm_block(imm, target_function);
        call_with_constant(imm, target_function);
        call_with_constant(imm, target_function);
       // execute_full_asm_block(imm, target_function);
    }
    sleep(15);

    return 0;
}