#pragma once
#include "Example.h"
#include "Figura.h"
class Example1: public Example
{
public:
	Example1();
	
	virtual void init()override;
	virtual void Render()override;
	virtual void KeyboardFunc(unsigned char key, int X, int Y)override;
	virtual void Idle()override;

	Figura* cubo;
	void DrawPoint();
	void DrawLine();
};


