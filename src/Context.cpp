#include "tezzgl/Context.hpp"

void Context::makeCurrent(Window window) {
    glfwMakeContextCurrent(window.window());
}

Window Context::current() {
    return {glfwGetCurrentContext()};
}

void Context::swapInterval( int interval ) {
    glfwSwapInterval(interval);
}

int Context::extensionSupported( StringConstant extension ) {
    return extensionSupported(extension);
}
