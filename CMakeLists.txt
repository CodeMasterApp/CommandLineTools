cmake_minimum_required(VERSION 3.12)

project(CMInstaller)

# Set the source files and executable name
set(SOURCES main.c)

# Path to the directory containing glfw3.h
set(GLFW_INCLUDE_DIR "/Library/Developer/CommandLineTools/SDKs/MacOSX14.0.sdk/System/Library/Frameworks/OpenGL.framework/Versions/A/Headers")

# Find GLFW package
find_package(glfw3 REQUIRED)

# Include GLFW header files
include_directories(${GLFW_INCLUDE_DIR})

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link against GLFW
target_link_libraries(${PROJECT_NAME} PRIVATE glfw)
