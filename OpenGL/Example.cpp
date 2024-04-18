#include "Example.h"
#include <GL/glut.h>
//#include <stdio.h>

Example::Example()
{
}

void Example::DrawAxis(float distance)
{
	// Dibujar ejes de coordenadas
	glLineWidth(2.0);
	glBegin(GL_LINES);
	// Eje X en rojo
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-distance, 0.0f, 0.0f);
	glVertex3f(distance, 0.0f, 0.0f);
	// Eje Y en verde
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, -distance, 0.0f);
	glVertex3f(0.0f, distance, 0.0f);
	// Eje Z en azul
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, -distance);
	glVertex3f(0.0f, 0.0f, distance);
	glEnd();
}

void Example::DrawGrids()
{
	glColor3f(0.5f, 0.5f, 0.5f);
	for (float i = -20; i <= 20; ++i) {
		glBegin(GL_LINES);
		glVertex3f(i, 0, -20);
		glVertex3f(i, 0, 20);
		glEnd();

		glBegin(GL_LINES);
		glVertex3f(-20, 0, i);
		glVertex3f(20, 0, i);
		glEnd();
	}
	 
}

