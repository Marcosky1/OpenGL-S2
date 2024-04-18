
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


}

void Example3::Render() {   
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    DrawGrid();
    cubo.Render();
    // Traslación
    glTranslatef(cubeX, cubeY, cubeZ);

    // Rotación
    glRotatef(cubeAngle, 0.0f, 1.0f, 0.0f);

    // Escalado
    glScalef(cubeScale, cubeScale, cubeScale);   

    glutSwapBuffers();
    glFlush();
}

void Example3::DrawGrid() {
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