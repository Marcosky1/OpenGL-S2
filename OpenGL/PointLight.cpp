#include "PointLight.h"

void PointLight::init()
{
	Light_position[3] = 1.0f;
	glLightfv(fuente, GL_POSITION, Light_position);
	GLfloat Lightcolor[] = { color.red,color.green,color.blue,1 };
}
