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

    cubo = new Esfera();
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
    DrawGrids();
    DrawAxis(10);
    ((Esfera*)cubo)->RenderNomaterial();
    glPopMatrix();

    glFlush();
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

void Example4::DrawPoint()
{
}

void Example4::DrawLine()
{
}
