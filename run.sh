#!/bin/bash

# Set the name of the output executable
OUTPUT_EXECUTABLE="CMInstaller"

# Source files for the GLFW application
SOURCE_FILES="main.c" 

# Path to the GLFW header file
# GLFW_INCLUDE_PATH="/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks"
GLFW_INCLUDE_PATH="/Library/Developer/CommandLineTools/SDKs/MacOSX14.0.sdk/System/Library/Frameworks/OpenGL.framework/Versions/A/Headers"

# Compiler command
COMPILER="gcc"

# Compiler flags (include GLFW and link against it)
FLAGS="-I$GLFW_INCLUDE_PATH -lglfw -framework OpenGL"

# Compile the source files
$COMPILER $SOURCE_FILES $FLAGS -o $OUTPUT_EXECUTABLE
