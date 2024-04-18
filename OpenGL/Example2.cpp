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
	DrawGrids();
	DrawAxis(10);
	glFlush();
}



void Example2::KeyboardFunc(unsigned char key, int X, int Y)
{
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