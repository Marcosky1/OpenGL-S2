#include "Example6.h"
#include "IncludeGL.h"
#include <cmath>
#include"BMPTextureManager.h"


Example6::Example6() {}

void Example6::init() {

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);

    cubo.color.setColor(1,1,1);

    MytextureManager = new BMPTextureManager();
    ((BMPTextureManager*)MytextureManager)->LoadBMP("./Textura/wallBMP.bmp");
}

void Example6::Render() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    DrawGrids();
    DrawAxis(10);
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_TEXTURE_GEN_S); //enable texture coordinate generation
    glEnable(GL_TEXTURE_GEN_T);
    //glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
    glBindTexture(GL_TEXTURE_2D, ((BMPTextureManager*)MytextureManager)->idTextura);

    cubo.Render();

    glDisable(GL_TEXTURE_GEN_S); //enable texture coordinate generation
    glDisable(GL_TEXTURE_GEN_T);
    glDisable(GL_TEXTURE_2D);


    glFlush();

}

 

void Example6::KeyboardFunc(unsigned char key, int X, int Y) {
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

void Example6::Idle() {}

