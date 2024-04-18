#pragma once
#include "IncludeGL.h"
#include "Example2.h"
#include <cmath>
#include <iostream>

Example2::Example2() 
{}

void Example2::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	camera.UpdateCamera();
	glMatrixMode(GL_MODELVIEW);

}
void Example2::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	DrawGrid();
	DrawAxis();
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
	glVertex3f(-20.0f, 0.0f, 0.0f);
	glVertex3f(20.0f, 0.0f, 0.0f);
	// Eje Y en verde
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, -20.0f, 0.0f);
	glVertex3f(0.0f, 20.0f, 0.0f);
	// Eje Z en azul
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, -20.0f);
	glVertex3f(0.0f, 0.0f, 20.0f);
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

void Example2::KeyboardFunc(unsigned char key, int X, int Y) {
	switch (key) {
	case 'w':
		camera.MoveForward();
		break;
	case 's':
		camera.MoveBackward();
		break;
	case 'a':
		camera.StrafeLeft();
		break;
	case 'd':
		camera.StrafeRight();
		break;
	}
	camera.UpdateCamera();
	std::cout << "Camera Position: (" << camera.getPosition().x << ", " << camera.getPosition().y << ")" << std::endl;
	glutPostRedisplay();
}




void Example2::Idle()
{
	glutPostRedisplay();
}