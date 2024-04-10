#pragma once
#include "Example.h"
#include "Cubo.h"
class Example1: public Example
{
public:
	Example1();
	
	virtual void init()override;
	virtual void Render()override;
	virtual void KeyboardFunc(unsigned char key, int X, int Y)override;
	virtual void Idle()override;

	Cubo cubo;
	void DrawGrid();
	void DrawAxis();
	void DrawPoint();
	void DrawLine();
};

