#include "Esfera.h"
#include "IncludeGL.h"

void Esfera::init()
{
}

void Esfera::RenderVertexArraySimple()
{
}

void Esfera::RenderVertexArrayIndexado()
{
}

void Esfera::RenderVertexArrayInstanciado()
{
}

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
