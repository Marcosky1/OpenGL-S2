#include "Cuadrado.h"
#include "IncludeGL.h"

Cuadrado::Cuadrado()
{
    
}

void Cuadrado::Render()
{
    glColor3f(color.red, color.blue, color.green);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f, 1.0f, 0.0f);
    glEnd();
    glPopMatrix();
}
