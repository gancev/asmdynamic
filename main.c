#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

//--------------------------------------------------------------
// Common AArch64 Inline Assembly Functions
//--------------------------------------------------------------

// MOV: Returns the immediate value by moving it into a register.
static inline uint64_t asm_mov(uint64_t imm) {
    uint64_t result;
    __asm__ volatile (
        "mov %0, %1\n\t"
        : "=r"(result)
        : "r"(imm)
    );
    return result;
}

// ADD: Returns the sum of two operands.
static inline uint64_t asm_add(uint64_t a, uint64_t b) {
    uint64_t result;
    __asm__ volatile (
        "add %0, %1, %2\n\t"
        : "=r"(result)
        : "r"(a), "r"(b)
    );
    return result;
}

// SUB: Returns the difference of two operands.
static inline uint64_t asm_sub(uint64_t a, uint64_t b) {
    uint64_t result;
    __asm__ volatile (
        "sub %0, %1, %2\n\t"
        : "=r"(result)
        : "r"(a), "r"(b)
    );
    return result;
}

// AND: Returns the bitwise AND of two operands.
static inline uint64_t asm_and(uint64_t a, uint64_t b) {
    uint64_t result;
    __asm__ volatile (
        "and %0, %1, %2\n\t"
        : "=r"(result)
        : "r"(a), "r"(b)
    );
    return result;
}

// ORR: Returns the bitwise OR of two operands.
static inline uint64_t asm_orr(uint64_t a, uint64_t b) {
    uint64_t result;
    __asm__ volatile (
        "orr %0, %1, %2\n\t"
        : "=r"(result)
        : "r"(a), "r"(b)
    );
    return result;
}

// EOR: Returns the bitwise exclusive OR of two operands.
static inline uint64_t asm_eor(uint64_t a, uint64_t b) {
    uint64_t result;
    __asm__ volatile (
        "eor %0, %1, %2\n\t"
        : "=r"(result)
        : "r"(a), "r"(b)
    );
    return result;
}

// MUL: Returns the product of two operands.
static inline uint64_t asm_mul(uint64_t a, uint64_t b) {
    uint64_t result;
    __asm__ volatile (
        "mul %0, %1, %2\n\t"
        : "=r"(result)
        : "r"(a), "r"(b)
    );
    return result;
}

// LSL: Logical shift left using variable shift (LSLV).
static inline uint64_t asm_lsl(uint64_t a, uint32_t shift) {
    uint64_t result;
    __asm__ volatile (
        "lslv %0, %1, %2\n\t"
        : "=r"(result)
        : "r"(a), "r"(shift)
    );
    return result;
}

// LSR: Logical shift right using variable shift (LSRV).
static inline uint64_t asm_lsr(uint64_t a, uint32_t shift) {
    uint64_t result;
    __asm__ volatile (
        "lsrv %0, %1, %2\n\t"
        : "=r"(result)
        : "r"(a), "r"(shift)
    );
    return result;
}

// ASR: Arithmetic shift right using variable shift (ASRV).
static inline uint64_t asm_asr(uint64_t a, uint32_t shift) {
    uint64_t result;
    __asm__ volatile (
        "asrv %0, %1, %2\n\t"
        : "=r"(result)
        : "r"(a), "r"(shift)
    );
    return result;
}

// LDR: Loads a 64-bit value from memory.
static inline uint64_t asm_ldr(uint64_t *ptr) {
    uint64_t result;
    __asm__ volatile (
        "ldr %0, [%1]\n\t"
        : "=r"(result)
        : "r"(ptr)
    );
    return result;
}

// STR: Stores a 64-bit value into memory.
static inline void asm_str(uint64_t value, uint64_t *ptr) {
    __asm__ volatile (
        "str %0, [%1]\n\t"
        :
        : "r"(value), "r"(ptr)
    );
}

//--------------------------------------------------------------
// Main: Demonstration with Random Operands in a Loop
//--------------------------------------------------------------

int main(void) {
    // Seed the random number generator.
    srand((unsigned)time(NULL));

    for (int i = 0; i < 100000; i++) {
        // Generate random values for a and b.
        uint64_t a = rand() % 100; // Random value between 0 and 99.
        uint64_t b = rand() % 100; // Random value between 0 and 99.
        // Generate a random value for the MOV operation.
        uint64_t mov_val = rand() % 1000; // Random value for asm_mov.
        // Generate a random value to store using STR.
        uint64_t store_val = rand() % 100000; // Random value for asm_str.
        // Generate a random shift amount between 0 and 63.
        uint32_t shift = rand() % 64;

        printf("Iteration %d:\n", i + 1);
        printf("  asm_mov(%lu)       = %lu\n", mov_val, asm_mov(mov_val));
        printf("  asm_add(%lu, %lu)  = %lu\n", a, b, asm_add(a, b));
        printf("  asm_sub(%lu, %lu)  = %lu\n", a, b, asm_sub(a, b));
        printf("  asm_and(%lu, %lu)  = %lu\n", a, b, asm_and(a, b));
        printf("  asm_orr(%lu, %lu)  = %lu\n", a, b, asm_orr(a, b));
        printf("  asm_eor(%lu, %lu)  = %lu\n", a, b, asm_eor(a, b));
        printf("  asm_mul(%lu, %lu)  = %lu\n", a, b, asm_mul(a, b));
        printf("  asm_lsl(%lu, %u)   = %lu\n", a, shift, asm_lsl(a, shift));
        printf("  asm_lsr(%lu, %u)   = %lu\n", a, shift, asm_lsr(a, shift));
        printf("  asm_asr(%lu, %u)   = %lu\n", a, shift, asm_asr(a, shift));
        
        uint64_t mem = 0;
        asm_str(store_val, &mem);
        printf("  asm_str(%lu, &mem) -> mem = %lu\n", store_val, mem);
        uint64_t loaded = asm_ldr(&mem);
        printf("  asm_ldr(&mem)      = %lu\n", loaded);
        printf("\n");
    }

    return 0;
}