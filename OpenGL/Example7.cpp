#include "Example7.h"
#include "IncludeGL.h"
#include "Cuadrado.h"
#include"BMPTextureManager.h"
#include <cmath>

Example7::Example7() {}

void Example7::init() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
    glMatrixMode(GL_MODELVIEW);

    cubo = new Cuadrado();
    ((Cuadrado*)cubo)->initMaterail("./Textura/wallBMP.bmp");
    ((Cuadrado*)cubo)->GetMaterial()->SetColor(1, 0.7, 1);

}

void Example7::Render() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    DrawGrids();

    DrawAxis(10);

    ((Cuadrado*)cubo)->Render();

    glFlush();
}



void Example7::KeyboardFunc(unsigned char key, int X, int Y) {

}

void Example7::Idle() {}

