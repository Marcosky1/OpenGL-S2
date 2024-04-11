#include "DirectionLight.h"

void DirectionLight::init()
{
	Light_diretion[3] = 0;
	glLightfv(fuente, GL_POSITION, Light_diretion);
	GLfloat Lightcolor[]={color.red,color.green,color.blue,1};
}
