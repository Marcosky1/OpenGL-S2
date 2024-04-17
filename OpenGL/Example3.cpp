#include "Example3.h"
#include "IncludeGL.h"
#include <cmath>

Example3::Example3() {}

void Example3::init() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    glLoadIdentity();
    // Utilizar la cámara para establecer la vista
    camera.UpdateCamera();
    glMatrixMode(GL_MODELVIEW);
    esfera.color.setColor(0.5f, 1.0f, 0.7f);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    float light_position[] = { 5.0f, 5.0f, 5.0f, 1.0f };
    float ambient[] = { 0.2f, 0.2f, 0.2f, 1.0f };
    float diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    float specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
}

void Example3::Render() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    DrawGrids();
    DrawAxis(10);
    esfera.Render();
    glFlush();
}


void Example3::KeyboardFunc(unsigned char key, int X, int Y) {
    switch (key) {
    case 'w':
    case 'W':
        // Ajustar la posición de la cámara hacia arriba
        camera.MoveForward();
        break;
    case 's':
    case 'S':
        // Ajustar la posición de la cámara hacia abajo
        camera.MoveBackward();
        break;
    }

    camera.UpdateCamera();
    glutPostRedisplay();
}

void Example3::Idle() {}

