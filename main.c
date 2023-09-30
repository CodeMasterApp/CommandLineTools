#include "glfw3.h"
//#include "include/glfw-3.3.8.bin.MACOS/include/GLFW/glfw3.h"
//#include "GLFW/glfw3.h"

int main() {
    if (!glfwInit())
        return -1;

    GLFWwindow* window = glfwCreateWindow(640, 480, "My GUI", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        // Render GUI here

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}


