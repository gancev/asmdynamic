# Python script to generate 1000 functions with inline assembly blocks.

filename = "main.c"

with open(filename, "w") as f:
    # Write headers
    f.write("#include <stdio.h>\n#include <stdint.h>\n\n")

    # Write target functions
    for i in range(1, 10001):
        f.write(f"void target_func{i}(void *param) {{ printf(\"Target Function {i}: param = %p\\n\", param); }}\n")

    # Write inline assembly functions
    for i in range(1, 10001):
        f.write(f"""
static inline void execute_full_asm_block_var{i}(void *target) {{
    __asm__ volatile (
        "mov x1, #{i}\\n\\t"         
        "add x0, sp, x1\\n\\t"      
        "blr %0\\n\\t"              
        :
        : "r"(target)
        : "x0", "x1"
    );
}}\n""")

    # Write main function
    f.write("\nint main(void) {\n")
    for i in range(1, 10001):
        f.write(f"    execute_full_asm_block_var{i}(target_func{i});\n")
    f.write("    return 0;\n}\n")

print(f"Generated {filename} with 10000 variations.")