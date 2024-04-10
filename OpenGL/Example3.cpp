#include "Example3.h"
#include "IncludeGL.h"

Example3::Example3()
{
}


void Example3::init()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClearDepth(1.0);
	gluLookAt(5, 5, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
	esfera.color.setColor(0.5f, 1.0f, 0.6f);

	// Activar la iluminación y la fuente de luz
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

	// Definir la posición de la luz
	float light_position[] = { 5.0f, 5.0f, 5.0f, 1.0f }; // última componente 1 para indicar luz puntual
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);

	// Definir las componentes ambientales, difusas y especulares de la luz
	float ambient[] = { 0.2f, 0.2f, 0.2f, 1.0f };
	float diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	float specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
}

void Example3::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	DrawGrid();
	DrawAxis();
	esfera.Render();
	glFlush();
}

void Example3::DrawPoint()
{
}

void Example3::DrawLine()
{
}

void Example3::DrawAxis()
{
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

void Example3::DrawGrid()
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

void Example3::KeyboardFunc(unsigned char key, int X, int Y)
{
}

void Example3::Idle()
{
}
