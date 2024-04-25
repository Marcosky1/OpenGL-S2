#include "Example7.h"
#include "IncludeGL.h"
#include "Esfera.h"
#include <cmath>

Example7::Example7() {}

void Example7::init() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    gluLookAt(50, 50, 50, 0, 0, 0, 0, 1, 0);
    glMatrixMode(GL_MODELVIEW);
    cubo = new Esfera();

    ((Esfera*)cubo)->initMaterail("./Textura/wallBMP.bmp");
    ((Esfera*)cubo)->GetMaterial()->SetColor(0.2, 0.25, 0.5);

    cubodisplayListID1 = glGenLists(1);
    glNewList(cubodisplayListID1, GL_COMPILE);
    
    ((Esfera*)cubo)->Render();
    glEndList();

    ListadeCubodisplayListID2 = glGenLists(2);
    glNewList(ListadeCubodisplayListID2, GL_COMPILE);
    for (size_t x = 0; x < 10; x++)
    {
        for (size_t z = 0; z < 10; z++)
        {
            
            glTranslated((GLdouble)x, (GLdouble)1, (GLdouble)z);
            glCallList(cubodisplayListID1);

        }
    }
    
    glEndList();

}

void Example7::Render() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    DrawGrids();
    DrawAxis(10);
  
    glCallList(ListadeCubodisplayListID2);

    glFlush();
}

void Example7::KeyboardFunc(unsigned char key, int X, int Y)
{
}

void Example7::Idle()
{
}


