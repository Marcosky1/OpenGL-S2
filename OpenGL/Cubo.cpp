#include "Cubo.h"
#include "IncludeGL.h"

Cubo::Cubo()
{
	
}

void Cubo::Render()
{
	// Dibujar un cubo
	glColor3f(color.red, color.blue, color.green);
	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 0.0f);
	glutSolidCube(1.0);
	glPopMatrix();
}
