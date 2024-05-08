#include "Example1.h"
#include "IncludeGL.h"
#include "Figura.h"
#include "Cubo.h"
#include"BMPTextureManager.h"

Example1::Example1()
{
}


void Example1::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
	cubo = new Cubo();
}
void Example1::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	    DrawGrids();
	    DrawAxis(10);		
		((Cubo*)cubo)->RenderNomaterial();
	glFlush();
	
}
void Example1::DrawPoint()
{

	 
}

void Example1::DrawLine()
{
	 
}



void Example1::KeyboardFunc(unsigned char key, int X, int Y)
{
	switch (key)
	{
	case '1' :
		
		break;
	case '2':
		
		break;
	case '3':
		
		break;
	default:
		break;
	}
}


void Example1::Idle()
{

}