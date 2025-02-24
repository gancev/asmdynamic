
# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Define the project name and language
project(static_random_asm_207 C)

# Set the C standard to C11 (modify as needed)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Force compilation for the Apple M1 (arm64)
set(CMAKE_OSX_ARCHITECTURES "arm64")

# Add an executable target with the source file(s)
add_executable(static_random_asm_207 main.c)
