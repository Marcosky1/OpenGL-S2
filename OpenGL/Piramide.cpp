#include "Piramide.h"
#include "IncludeGL.h"

Piramide::Piramide()
{
    
}

void Piramide::Render()
{
    // Dibujar una pirámide
    glColor3f(color.red, color.blue, color.green);
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glutSolidCone(2.0, 3.0, 4, 1); // Parámetros: radio de la base, altura, slices, stacks
    glPopMatrix();
}
