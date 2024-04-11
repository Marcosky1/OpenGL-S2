#pragma once
#include "Color.h"
#include "IncludeGL.h"
class Light
{
public: 
	Color color;
	GLenum fuente;
	Light();
	virtual void init() = 0;
	void Enable();
	void Disable();
};

