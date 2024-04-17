#pragma once
#include "IncludeGL.h"
#include "Example2.h"
#include <cmath>
#include <iostream>

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
	DrawGrids();
	DrawAxis(10);
	glFlush();
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
	std::cout << "Camera Position: (" << cameraX << ", " << cameraY << ", " << cameraZ << ")" << std::endl;
}


void Example2::Idle()
{
	glutPostRedisplay();
}