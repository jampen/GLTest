#include <GLFW/glfw3.h>
#include <stdio.h>

int main() {
    if (glfwInit() == GLFW_FALSE) return 1;
    // Not actually used for drawing to
    glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);

    // glGetString requires OpenGL 2.0
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    GLFWwindow* window = glfwCreateWindow(128, 128, "GLTest", NULL, NULL);
    if (window == NULL) {
        fprintf(stderr, "error: unable to create a GL context\n");
        fprintf(stderr, "reason: this program requires OpenGL 2.0 capability\n");
        return 1;
    }
    glfwMakeContextCurrent(window);
    const char* vendor = glGetString(GL_VENDOR);
    const char* renderer = glGetString(GL_RENDERER);
    const char* version = glGetString(GL_VERSION);
    fprintf(stdout, "GL_VENDOR: %s\n", vendor == NULL ? "[null]" : vendor);
    fprintf(stdout, "GL_RENDERER: %s\n", renderer == NULL ? "[null]" : renderer);
    fprintf(stdout, "GL_VERSION: %s\n", version == NULL ? "[null]" : version);
    glfwTerminate();
    return 0;
}
