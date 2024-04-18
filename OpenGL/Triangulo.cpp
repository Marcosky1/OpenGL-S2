#include "Triangulo.h"
#include "IncludeGL.h"

Triangulo::Triangulo()
{
    
}

void Triangulo::Render()
{
    material->Enable();
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glVertex3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, -1.0f, 0.0f);
    glEnd();
    glPopMatrix();
    material->Disable();
}
