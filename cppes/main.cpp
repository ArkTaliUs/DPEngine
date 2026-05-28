#include <GLFW/glfw3.h>

//core-function
static int _runengine() {
    if (!glfwInit()) return -1;
            glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
            GLFWwindow* window = glfwCreateWindow(800, 600, "DP Engine", nullptr, nullptr);
            if (!window) {
                glfwTerminate();
                return -1;
            }
            glfwMakeContextCurrent(window);
            while (!glfwWindowShouldClose(window)) {
                glfwPollEvents();
            }
            glfwDestroyWindow(window);
            glfwTerminate();
            return 0;
}

//win init, it's tested only on win10, open an issue, blah-blah-blah-blah-blah-blah-blah-blah-blah-blah-blah-blah-blah-blah-blah-blah-blah-blah-blah-blah
#ifdef _WIN32
    #include "WinInit/WinInit.cpp"

//linux init, i've downloaded linux VM only for it, lol, it's tested only on Ubuntu, open an issue if it doesn't work on other(or something) distributions
#elif __linux__
    #include "LinuxInit/LinuxInit.cpp"

#endif