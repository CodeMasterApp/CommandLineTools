#!/bin/bash

# Set the name of the output executable
OUTPUT_EXECUTABLE="main"

# Source files for the GLFW application
SOURCE_FILES="main.c"

# Path to the GLFW header file
GLFW_INCLUDE_PATH="/include/glfw-3.3.8.bin.MACOS/include/GLFW/glfw3.h"  

# Compiler command
COMPILER="g++"

# Compiler flags (include GLFW and link against it)
FLAGS="-I$GLFW_INCLUDE_PATH -lglfw -framework OpenGL"

# Compiler command with GLFW include path
# g++ -o ./main -I$GLFW_INCLUDE_PATH ./main.c
$COMPILER $FLAGS -o $OUTPUT_EXECUTABLE -I$GLFW_INCLUDE_PATH $SOURCE_FILES