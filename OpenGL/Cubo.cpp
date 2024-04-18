#include "Cubo.h"
#include "IncludeGL.h"

Cubo::Cubo()
{
	
}

void Cubo::Render()
{
	material->Enable();
	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 0.0f);
	glutSolidCube(1.0);
	glPopMatrix();
	material->Disable();
}
