#include "Example1.h"
#include "IncludeGL.h"

Example1::Example1() {}

void Example1::init() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0);
    gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
    glMatrixMode(GL_MODELVIEW);
}

void Example1::Render() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
        DrawPoint();
        DrawGrid(); 
        DrawAxis();
        
    glFlush();
}

void Example1::DrawPoint() {
    glBegin(GL_POINTS);
    glVertex3f(0.0f, 1.0f, 3.0f);
    glEnd();
}

void Example1::DrawLine() {}

void Example1::DrawAxis() {
    glLineWidth(4);
    glColor4f(0.0f, 1.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex3f(0.0f, 10.0f, 0.0f);
    glVertex3f(0.0f, -10.0f, 0.0f);
    glEnd();

    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex3f(10.0f, 0.0f, 0.0f);
    glVertex3f(-10.0f, 0.0f, 0.0f);
    glEnd();

    glColor4f(0.0f, 0.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex3f(0.0f, 0.0f, 10.0f);
    glVertex3f(0.0f, 0.0f, -10.0f);
    glEnd();
}

void Example1::KeyboardFunc(unsigned char key, int X, int Y) {}

void Example1::Idle() {}

void Example1::DrawGrid() {
    // Dibujar líneas horizontales
    for (float i = -10; i <= 10; ++i) {
        glBegin(GL_LINES);
        glVertex3f(-10, 0, i);
        glVertex3f(10, 0, i);
        glEnd();
    }
    // Dibujar líneas verticales
    for (float i = -10; i <= 10; ++i) {
        glBegin(GL_LINES);
        glVertex3f(i, 0, -10);
        glVertex3f(i, 0, 10);
        glEnd();
    }
}
