#include "Example8.h"
#include "IncludeGL.h"
#include <cmath>

Example8::Example8() {}

void Example8::init() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
    glMatrixMode(GL_MODELVIEW);
}

void Example8::Render() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    DrawAxis(10);

    glFlush();
}

void Example8::KeyboardFunc(unsigned char key, int X, int Y) {
    switch (key) {
    case 'w':
    case 'W':

        break;
    case 's':
    case 'S':

        break;
    }


    glutPostRedisplay();
}

void Example8::Idle() {}

