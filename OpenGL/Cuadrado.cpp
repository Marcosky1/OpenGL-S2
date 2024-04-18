#include "Cuadrado.h"
#include "IncludeGL.h"

Cuadrado::Cuadrado()
{
    
}

void Cuadrado::Render()
{
    material->Enable();
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f, 1.0f, 0.0f);
    glEnd();
    glPopMatrix();
    material->Disable();
}
