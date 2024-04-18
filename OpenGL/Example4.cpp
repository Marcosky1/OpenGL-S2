#include "Example4.h"
#include "IncludeGL.h"
#include <iostream>

Example4::Example4() {}

void Example4::init() {

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
    glMatrixMode(GL_MODELVIEW);

    glEnable(GL_DEPTH_TEST);

    // Inicializar las luces
    spotLight.init();
    spotLight.fuente = GL_LIGHT0;

    dirLight.init();
    dirLight.fuente = GL_LIGHT1;

    pointLight.init();
    pointLight.fuente = GL_LIGHT2;

    esfera.color.setColor(0.5f, 1.0f, 0.2f);
}

void Example4::Render() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    spotLight.Light::Enable();
    dirLight.Enable();
    pointLight.Enable();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, -5.0f);
    DrawGrid();
    esfera.Render();
    glPopMatrix();

    glFlush();
}

void Example4::DrawGrid() {
    glColor3f(0.5f, 0.5f, 0.5f);
    for (float i = -20; i <= 20; ++i) {
        glBegin(GL_LINES);
        glVertex3f(i, 0, -20);
        glVertex3f(i, 0, 20);
        glEnd();

        glBegin(GL_LINES);
        glVertex3f(-20, 0, i);
        glVertex3f(20, 0, i);
        glEnd();
    }
}

void Example4::KeyboardFunc(unsigned char key, int X, int Y) {
    switch (key) {
    case '1':
        spotLight.Light::Enable();
        dirLight.Disable();
        pointLight.Disable();
        break;
    case '2':
        spotLight.Light::Disable();
        dirLight.Enable();
        pointLight.Disable();
        break;
    case '3':
        spotLight.Light::Disable();
        dirLight.Disable();
        pointLight.Enable();
        break;
    }
    glutPostRedisplay();
}

void Example4::Idle() {}
