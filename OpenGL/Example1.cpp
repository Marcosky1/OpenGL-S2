#include "Example1.h"
#include "IncludeGL.h"
#include "Figura.h"
Example1::Example1()
{
}


void Example1::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
	cubo.color.setColor(0.5f, 1.0f, 0.2f);
}
void Example1::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	    DrawGrids();
	    DrawAxis(10);
		cubo.Render();
	glFlush();
	
}
void Example1::DrawPoint()
{

	 
}



void Example1::KeyboardFunc(unsigned char key, int X, int Y)
{
	switch (key)
	{
	case '1' :
		cubo.color.setColor(1, 1, 1);
		break;
	case '2':
		cubo.color.setColor(0.5, 1, 0.5);
		break;
	case '3':
		cubo.color.setColor(0.2, 0.5, 0.5);
		break;
	default:
		break;
	}
}


void Example1::Idle()
{

}