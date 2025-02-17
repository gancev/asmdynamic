# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Define the project name and language
project(asm_dynamic C)

# Set the C standard to C11 (modify as needed)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Force compilation for the Apple M1 (arm64)
set(CMAKE_OSX_ARCHITECTURES "arm64")

add_subdirectory(add_blr)
add_subdirectory(most_common_0)
add_subdirectory(trip_random)
add_subdirectory(static_asm)