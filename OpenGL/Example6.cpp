#include "Example6.h"
#include "Cubo.h"
#include"BMPTextureManager.h"

Example6::Example6() {}

void Example6::init() {

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);

    

    cubo = new Cubo();
    ((Cubo*)cubo)->initMaterail("./Textura/wallBMP.bmp");
    ((Cubo*)cubo)->GetMaterial()->SetColor(0.2, 0.7, 0.5);
}

void Example6::Render() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    DrawGrids();
    DrawAxis(10);
    ((Cubo*)cubo)->Render();


    glFlush();

}

 

void Example6::KeyboardFunc(unsigned char key, int X, int Y) {
    
}

void Example6::Idle() {}

