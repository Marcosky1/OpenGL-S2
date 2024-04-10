#include "Esfera.h"
#include "IncludeGL.h"

Esfera::Esfera()
{

}

void Esfera::Render()
{
	// Dibujar una esfera
	glColor3f(color.red, color.blue, color.green);
	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 0.0f);
	glutSolidSphere(0.5, 20, 20);
	glPopMatrix();
}
