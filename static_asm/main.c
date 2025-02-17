#include <stdio.h>
#include <stdint.h>

//-----------------------------------------------------
// 10 Variations of the inline assembly block.
// Each variation computes: x0 = sp + constant,
// then branches (with link) to the supplied target function.
//-----------------------------------------------------

// Variation 1: immediate constant 0x10.
static inline void execute_full_asm_block_var1(void *target) {
    __asm__ volatile (
        "mov x1, #0x10\n\t"    /* Load immediate 0x10 into x1 */
        "add x0, sp, x1\n\t"    /* Compute x0 = sp + 0x10 */
        "blr %0\n\t"           /* Branch with link to the target */
        :
        : "r"(target)
        : "x0", "x1"
    );
}

// Variation 2: immediate constant 0x20.
static inline void execute_full_asm_block_var2(void *target) {
    __asm__ volatile (
        "mov x1, #0x20\n\t"    /* Load immediate 0x20 into x1 */
        "add x0, sp, x1\n\t"    /* Compute x0 = sp + 0x20 */
        "blr %0\n\t"           /* Branch with link to the target */
        :
        : "r"(target)
        : "x0", "x1"
    );
}

// Variation 3: immediate constant 0x30.
static inline void execute_full_asm_block_var3(void *target) {
    __asm__ volatile (
        "mov x1, #0x30\n\t"
        "add x0, sp, x1\n\t"
        "blr %0\n\t"
        :
        : "r"(target)
        : "x0", "x1"
    );
}

// Variation 4: immediate constant 0x40.
static inline void execute_full_asm_block_var4(void *target) {
    __asm__ volatile (
        "mov x1, #0x40\n\t"
        "add x0, sp, x1\n\t"
        "blr %0\n\t"
        :
        : "r"(target)
        : "x0", "x1"
    );
}

// Variation 5: immediate constant 0x50.
static inline void execute_full_asm_block_var5(void *target) {
    __asm__ volatile (
        "mov x1, #0x50\n\t"
        "add x0, sp, x1\n\t"
        "blr %0\n\t"
        :
        : "r"(target)
        : "x0", "x1"
    );
}

// Variation 6: immediate constant 0x60.
static inline void execute_full_asm_block_var6(void *target) {
    __asm__ volatile (
        "mov x1, #0x60\n\t"
        "add x0, sp, x1\n\t"
        "blr %0\n\t"
        :
        : "r"(target)
        : "x0", "x1"
    );
}

// Variation 7: immediate constant 0x70.
static inline void execute_full_asm_block_var7(void *target) {
    __asm__ volatile (
        "mov x1, #0x70\n\t"
        "add x0, sp, x1\n\t"
        "blr %0\n\t"
        :
        : "r"(target)
        : "x0", "x1"
    );
}

// Variation 8: immediate constant 0x80.
static inline void execute_full_asm_block_var8(void *target) {
    __asm__ volatile (
        "mov x1, #0x80\n\t"
        "add x0, sp, x1\n\t"
        "blr %0\n\t"
        :
        : "r"(target)
        : "x0", "x1"
    );
}

// Variation 9: immediate constant 0x90.
static inline void execute_full_asm_block_var9(void *target) {
    __asm__ volatile (
        "mov x1, #0x90\n\t"
        "add x0, sp, x1\n\t"
        "blr %0\n\t"
        :
        : "r"(target)
        : "x0", "x1"
    );
}

// Variation 10: immediate constant 0xA0.
static inline void execute_full_asm_block_var10(void *target) {
    __asm__ volatile (
        "mov x1, #0xA0\n\t"
        "add x0, sp, x1\n\t"
        "blr %0\n\t"
        :
        : "r"(target)
        : "x0", "x1"
    );
}

//-----------------------------------------------------
// Sample Target Functions
// Each target function receives the computed value in x0 (passed as the first argument).
// For demonstration, each prints its own label and the received parameter.
//-----------------------------------------------------
void target_func1(void *param) { printf("Target Function 1: param = %p\n", param); }
void target_func2(void *param) { printf("Target Function 2: param = %p\n", param); }
void target_func3(void *param) { printf("Target Function 3: param = %p\n", param); }
void target_func4(void *param) { printf("Target Function 4: param = %p\n", param); }
void target_func5(void *param) { printf("Target Function 5: param = %p\n", param); }
void target_func6(void *param) { printf("Target Function 6: param = %p\n", param); }
void target_func7(void *param) { printf("Target Function 7: param = %p\n", param); }
void target_func8(void *param) { printf("Target Function 8: param = %p\n", param); }
void target_func9(void *param) { printf("Target Function 9: param = %p\n", param); }
void target_func10(void *param) { printf("Target Function 10: param = %p\n", param); }

//-----------------------------------------------------
// Main function: Demonstrates the 10 variations.
// Each variation branches to its corresponding target function.
//-----------------------------------------------------
int main(void) {
    execute_full_asm_block_var1(target_func1);
    execute_full_asm_block_var2(target_func2);
    execute_full_asm_block_var3(target_func3);
    execute_full_asm_block_var4(target_func4);
    execute_full_asm_block_var5(target_func5);
    execute_full_asm_block_var6(target_func6);
    execute_full_asm_block_var7(target_func7);
    execute_full_asm_block_var8(target_func8);
    execute_full_asm_block_var9(target_func9);
    execute_full_asm_block_var10(target_func10);
    
    return 0;
}
