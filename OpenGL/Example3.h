#pragma once
#include "Example.h"
#include "Esfera.h"

class Example3 : public Example
{
public:
	Example3();

	virtual void init()override;
	virtual void Render()override;
	virtual void KeyboardFunc(unsigned char key, int X, int Y)override;
	virtual void Idle()override;

	float cameraAngleY = 0.0f;
	float cameraRadius = 5.0f;

	Esfera esfera;

	void DrawGrid();
	void DrawAxis();
	void DrawPoint();
	void DrawLine();
};

