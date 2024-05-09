#include "Esfera.h"
#include "IncludeGL.h"

Esfera::Esfera()
{

}

void Esfera::Render()
{
    material->Enable();
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glutSolidSphere(radius, slice, stacks);
    glPopMatrix();
    material->Disable();
}
