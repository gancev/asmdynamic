import argparse
import random
import os
from collections import defaultdict

def generate_instruction():
    # Generate unique label ID for branch targets
    uid = f"L{random.randint(0, 999999999)}"

    instruction_set = [
        # Arithmetic Operations
        {
            'templates': [
                {'text': 'add {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}']},
                {'text': 'add {dest}, {src1}, #{imm}', 'params': ['dest', 'src1', 'imm'], 'clobber': ['{dest}']},
                # {'text': 'add {dest}, {src1}, {src2}, {shift} #{amount}', 'params': ['dest', 'src1', 'src2', 'shift', 'amount'], 'clobber': ['{dest}']},
                {'text': 'adc {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}', 'cc']},
                {'text': 'adcs {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}', 'cc']},
                {'text': 'sub {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}']},
                {'text': 'subs {dest}, {src1}, #{imm}', 'params': ['dest', 'src1', 'imm'], 'clobber': ['{dest}', 'cc']},
                {'text': 'sbc {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}', 'cc']},
                {'text': 'mul {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}']},
                {'text': 'madd {dest}, {src1}, {src2}, {src3}', 'params': ['dest', 'src1', 'src2', 'src3'], 'clobber': ['{dest}']},
            ],
            'params': {
                'imm': (0, 4095),
                'amount': (0, 63)
            }
        },

        # Logical Operations
        {
            'templates': [
                {'text': 'and {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}']},
                {'text': 'orr {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}']},
                {'text': 'eor {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}']},
                {'text': 'bic {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}']},
                {'text': 'eon {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}']},
                {'text': 'ands {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}', 'cc']},
                {'text': 'orn {dest}, {src1}, {src2}', 'params': ['dest', 'src1', 'src2'], 'clobber': ['{dest}']},
            ],
            'params': {}
        },

        # Shift/Rotate Operations
        {
            'templates': [
                {'text': 'lsl {dest}, {src}, #{amount}', 'params': ['dest', 'src', 'amount'], 'clobber': ['{dest}']},
                {'text': 'lsr {dest}, {src}, #{amount}', 'params': ['dest', 'src', 'amount'], 'clobber': ['{dest}']},
                {'text': 'asr {dest}, {src}, #{amount}', 'params': ['dest', 'src', 'amount'], 'clobber': ['{dest}']},
                {'text': 'ror {dest}, {src}, #{amount}', 'params': ['dest', 'src', 'amount'], 'clobber': ['{dest}']},
                {'text': 'extr {dest}, {src1}, {src2}, #{amount}', 'params': ['dest', 'src1', 'src2', 'amount'], 'clobber': ['{dest}']},
            ],
            'params': {
                'amount': (0, 63)
            }
        },

        # Move Operations
        {
            'templates': [
                {'text': 'mov {dest}, {src}', 'params': ['dest', 'src'], 'clobber': ['{dest}']},
                {'text': 'movk {dest}, #{imm}, lsl #{shift}', 'params': ['dest', 'imm', 'shift'], 'clobber': ['{dest}']},
                {'text': 'movz {dest}, #{imm}, lsl #{shift}', 'params': ['dest', 'imm', 'shift'], 'clobber': ['{dest}']},
                {'text': 'movn {dest}, #{imm}, lsl #{shift}', 'params': ['dest', 'imm', 'shift'], 'clobber': ['{dest}']},
                {'text': 'mvn {dest}, {src}', 'params': ['dest', 'src'], 'clobber': ['{dest}']},
            ],
            'params': {
                'imm': (0, 65535),
                'shift': [0, 16, 32, 48]
            }
        },

        # Bit Manipulation
        {
            'templates': [
                {'text': 'clz {dest}, {src}', 'params': ['dest', 'src'], 'clobber': ['{dest}']},
                {'text': 'rbit {dest}, {src}', 'params': ['dest', 'src'], 'clobber': ['{dest}']},
                {'text': 'rev {dest}, {src}', 'params': ['dest', 'src'], 'clobber': ['{dest}']},
                {'text': 'rev16 {dest}, {src}', 'params': ['dest', 'src'], 'clobber': ['{dest}']},
                {'text': 'rev32 {dest}, {src}', 'params': ['dest', 'src'], 'clobber': ['{dest}']},
            ],
            'params': {}
        },

        # Comparison & Conditional Ops
        {
            'templates': [
                {'text': 'cmp {src1}, {src2}', 'params': ['src1', 'src2'], 'clobber': ['cc']},
                {'text': 'cmn {src1}, {src2}', 'params': ['src1', 'src2'], 'clobber': ['cc']},
                {'text': 'ccmp {src1}, {src2}, #{nzcv}, {cond}', 'params': ['src1', 'src2', 'nzcv', 'cond'], 'clobber': ['cc']},
                {'text': 'csel {dest}, {src1}, {src2}, {cond}', 'params': ['dest', 'src1', 'src2', 'cond'], 'clobber': ['{dest}']},
                {'text': 'cset {dest}, {cond}', 'params': ['dest', 'cond'], 'clobber': ['{dest}', 'cc']},
            ],
            'params': {
                'nzcv': (0, 15),
                'cond': ['eq', 'ne', 'hs', 'lo', 'mi', 'pl', 'vs', 'vc', 'hi', 'ls', 'ge', 'lt', 'gt', 'le']
            }
        },

        # Branch & Control Flow
        {
            'templates': [
                # Conditional branch with label
                {'text': f'b.{{cond}} {uid}\tnop\t{uid}:', 'params': ['cond'], 'clobber': []},
                # # Branch with link
                # # {'text': f'bl {uid}\tnop\t{uid}:', 'params': [], 'clobber': ['lr']},
                # {'text': f'bl {uid}\tnop\t{uid}:', 'params': [], 'clobber': []},
                # Compare and branch
                {'text': f'cbz {{reg}}, {uid}\tnop\t{uid}:', 'params': ['reg'], 'clobber': []},
                {'text': f'cbnz {{reg}}, {uid}\tnop\t{uid}:', 'params': ['reg'], 'clobber': []},
                # Test and branch
                {'text': f'tbz {{reg}}, #{{bit}}, {uid}\tnop\t{uid}:', 'params': ['reg', 'bit'], 'clobber': []},
                {'text': f'tbnz {{reg}}, #{{bit}}, {uid}\tnop\t{uid}:', 'params': ['reg', 'bit'], 'clobber': []},
                # # Return
                # {'text': 'ret {reg}', 'params': ['reg'], 'clobber': []},
                # Unconditional branch
                {'text': f'b {uid}\tnop\t{uid}:', 'params': [], 'clobber': []}
            ],
            'params': {
                'cond': ['eq', 'ne', 'gt', 'lt', 'ge', 'le'],
                'bit': (0, 63)
            }
        },

        # Load/Store Operations
        {
            'templates': [
                {'text': 'ldr {dest}, [sp, #{offset}]', 'params': ['dest', 'offset'], 'clobber': ['{dest}', 'memory']},
                {'text': 'str {src}, [sp, #{offset}]', 'params': ['src', 'offset'], 'clobber': ['memory']},
                {'text': 'ldp {dest1}, {dest2}, [sp, #{offset}]', 'params': ['dest1', 'dest2', 'offset'], 'clobber': ['{dest1}', '{dest2}', 'memory']},
                # {'text': 'stp {src1}, {src2}, [sp, #{offset}]', 'params': ['src1', 'src2', 'offset'], 'clobber': ['memory']},
                {'text': 'ldur {dest}, [sp, #{offset}]', 'params': ['dest', 'offset'], 'clobber': ['{dest}', 'memory']},
                {'text': 'stur {src}, [sp, #{offset}]', 'params': ['src', 'offset'], 'clobber': ['memory']},
            ],
            'params': {
                # 'offset': (0, 504)
                'offset': (-256, 255)
            }
        }
    ]

    # Select random instruction category
    category = random.choice(instruction_set)
    template = random.choice(category['templates'])
    
    params = defaultdict(str)
    clobber = set()
    
    # Parameter generation functions
    param_generators = {
        # Register types
        'dest': lambda: f'x{random.randint(0, 15)}',
        'src1': lambda: f'x{random.randint(0, 15)}',
        'src2': lambda: f'x{random.randint(0, 15)}',
        'src3': lambda: f'x{random.randint(0, 15)}',
        'reg': lambda: f'x{random.randint(0, 15)}',
        
        # Special types
        'cond': lambda: random.choice(category['params'].get('cond', [])),
        'bit': lambda: random.randint(*category['params'].get('bit', (0, 0))),
        # 'shift': lambda: random.choice(['lsl', 'lsr', 'asr', 'ror']),
        'shift': lambda: random.choice([0, 16, 32, 48]),
        
        # Numeric types
        'imm': lambda: random.randint(*category['params'].get('imm', (0, 0))),
        'amount': lambda: random.randint(*category['params'].get('amount', (0, 0))),
        # 'offset': lambda: random.randrange(0, 504, 8)
        'offset': lambda: random.randrange(-256, 255, 8)
    }

    # Generate parameters
    for param in template['params']:
        if param in param_generators:
            params[param] = param_generators[param]()
        elif param in category.get('params', {}):
            param_type = category['params'][param][0]
            if param_type == 'list':
                params[param] = random.choice(category['params'][param][0])
            elif param_type == 'range':
                params[param] = random.randint(*category['params'][param])

    # Format instructions
    instructions = []
    for line in template['text'].split('\n'):
        try:
            instructions.append(line.format(**params))
        except KeyError:
            continue

    # Generate clobber list
    for c in template['clobber']:
        try:
            clobber.add(c.format(**params))
        except KeyError:
            continue

    return instructions, clobber

# The generate_function and main functions remain identical to previous version

def generate_function(used_sequences):
    max_attempts = 1000
    for _ in range(max_attempts):
        num_instr = random.randint(2, 10)
        instructions = []
        clobbered = set()
        
        while len(instructions) < num_instr:
            new_instrs, clobber = generate_instruction()
            remaining = num_instr - len(instructions)
            for instr_idx in range(min(len(new_instrs),remaining)):
                for line in new_instrs[instr_idx].split('\t'):
                    instructions.append(line)
            clobbered.update(clobber)
        
        sequence = tuple(instructions)
        if sequence not in used_sequences:
            used_sequences.add(sequence)
            return {
                'code': instructions,
                'clobber': sorted(clobbered)
            }
    raise RuntimeError("Failed to generate unique sequence")

def main():
    parser = argparse.ArgumentParser()

    parser.add_argument("-n", "--num_functions", type=int, default=2000, help = "number of functions to generate")
    parser.add_argument("-o", "--output", type=str, default="./v0/main.c", help = "output file")

    args = parser.parse_args()

    used_sequences = set()
    functions = []
    
    for i in range(args.num_functions):
        try:
            func = generate_function(used_sequences)
        except RuntimeError as e:
            print(f"Stopped at {i} functions: {str(e)}")
            break
        
        # Format assembly lines
        asm_lines = [f'"{line}\\n"' for line in func['code']]
        asm_code = '\n        '.join(asm_lines)
        
        # Format clobber list
        clobber = [f'"{c}"' for c in func['clobber'] if c]
        clobber_str = ', '.join(clobber) if clobber else ''
        
        function = f"""void func_{i}() {{
    asm volatile (
        {asm_code}
        : 
        : 
        : {clobber_str}
    );
}}"""
        functions.append(function)
    
    main_func = """int main() {{
    sleep(5);

    {}

    sleep(15);
    return 0;
}}""".format('\n    '.join([f"func_{i}();" for i in range(len(functions))]))
    
    out_path = os.path.dirname(args.output)
    script_dir = os.path.dirname(os.path.realpath(__file__))
    dir_count = len(next(os.walk(script_dir))[1])

    if not out_path or out_path==script_dir:
        raise RuntimeError("output must be in a subfolder relative to the script location!")

    os.makedirs(out_path, exist_ok=True)

    with open(args.output, 'w') as f:
        f.write('#include <unistd.h>\n\n')
        f.write('\n\n'.join(functions))
        f.write('\n\n' + main_func)

    cmake_content = f"""
# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Define the project name and language
project(static_random_asm_{dir_count} C)

# Set the C standard to C11 (modify as needed)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Force compilation for the Apple M1 (arm64)
set(CMAKE_OSX_ARCHITECTURES "arm64")

# Add an executable target with the source file(s)
add_executable(static_random_asm_{dir_count} main.c)
"""

    with open(f'{out_path}/CMakeLists.txt', 'w') as f:
        f.write(cmake_content)

    with open(f'{script_dir}/CMakeLists.txt', 'a+') as f:
        f.write(f'add_subdirectory({os.path.normpath(out_path)})\n')

    print(f"Generated {len(functions)} functions")

if __name__ == '__main__':
    main()
