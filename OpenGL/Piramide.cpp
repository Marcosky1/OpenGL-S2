#include "Piramide.h"
#include "IncludeGL.h"

Piramide::Piramide()
{
    
}

void Piramide::Render()
{
    // Dibujar una pir�mide
    glColor3f(color.red, color.blue, color.green);
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glutSolidTeapot(1.0);
    glPopMatrix();
}
