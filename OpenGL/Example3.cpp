
#include "Example3.h"
#include "IncludeGL.h"

Example3::Example3() 
{
    cubeX = 0.0f;
    cubeY = 0.0f;
    cubeZ = 0.0f;
    cubeAngle = 0.0f;
    cubeScale = 1.0f;
}

void Example3::init() {  
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0f);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, 1.0, 0.1, 100);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);

    cubo.color.setColor(0.5f, 0.5f, 1);
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
        cubeY += 0.1f; 
        break;
    case 's':
    case 'S':
        cubeY -= 0.1f; 
        break;
    case 'a':
    case 'A':
        cubeX -= 0.1f; 
        break;
    case 'd':
    case 'D':
        cubeX += 0.1f; 
        break;
    case 'q':
    case 'Q':
        cubeAngle -= 5.0f;
        break;
    case 'e':
    case 'E':
        cubeAngle += 5.0f; 
        break;
    case '+':
        cubeScale += 0.1f; 
        break;
    case '-':
        cubeScale -= 0.1f;
        break;
    }

    glutPostRedisplay();
}

void Example3::Idle() {}