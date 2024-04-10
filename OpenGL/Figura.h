#pragma once
#include "Color.h"
#include "Transform.h"
class Figura
{
public :
	Figura();
	virtual void Render()=0;
	Color color;
	Transform  transform;

};



