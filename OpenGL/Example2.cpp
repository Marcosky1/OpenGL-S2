#pragma once
#include "IncludeGL.h"
#include "Example2.h"
#include <cmath>

Example2::Example2() : cameraX(0.0f), cameraY(1.0f), cameraZ(5.0f), cameraYaw(0.0f), cameraSpeed(0.1f) 
{}

void Example2::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(cameraX, cameraY, cameraZ, cameraX + cos(cameraYaw), cameraY, cameraZ - sin(cameraYaw), 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);

}
void Example2::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	DrawAxis();
	DrawGrid();
	glFlush();
}
void Example2::DrawPoint()
{


}

void Example2::DrawLine()
{

}


void Example2::DrawAxis() {
	// Dibujar ejes de coordenadas
	glLineWidth(2.0);
	glBegin(GL_LINES);
	// Eje X en rojo
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-10.0f, 0.0f, 0.0f);
	glVertex3f(10.0f, 0.0f, 0.0f);
	// Eje Y en verde
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, -10.0f, 0.0f);
	glVertex3f(0.0f, 10.0f, 0.0f);
	// Eje Z en azul
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, -10.0f);
	glVertex3f(0.0f, 0.0f, 10.0f);
	glEnd();
}

void Example2::DrawGrid() {
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


void Example2::KeyboardFunc(unsigned char key, int X, int Y)
{
	switch (key) {
	case 'w':
		cameraX += cameraSpeed * cos(cameraYaw);
		cameraZ -= cameraSpeed * sin(cameraYaw);
		break;
	case 's':
		cameraX -= cameraSpeed * cos(cameraYaw);
		cameraZ += cameraSpeed * sin(cameraYaw);
		break;
	case 'a':
		cameraX -= cameraSpeed * sin(cameraYaw);
		cameraZ -= cameraSpeed * cos(cameraYaw);
		break;
	case 'd':
		cameraX += cameraSpeed * sin(cameraYaw);
		cameraZ += cameraSpeed * cos(cameraYaw);
		break;
	}
	gluLookAt(cameraX, cameraY, cameraZ, cameraX + cos(cameraYaw), cameraY, cameraZ - sin(cameraYaw), 0, 1, 0);
}


void Example2::Idle()
{
	glutPostRedisplay();
}