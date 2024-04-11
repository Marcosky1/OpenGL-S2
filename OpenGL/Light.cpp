#include "Light.h"


Light::Light()
{
	
}

void Light::Enable()
{
	glEnable(fuente);
}

void Light::Disable()
{
	glDisable(fuente);
}
