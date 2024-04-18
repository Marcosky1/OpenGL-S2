#pragma once
#include "IncludeGL.h"
#include "Color.h"

class Material
{
private:
	Color color;
	GLuint idTextura;
	unsigned int width, height;
	unsigned char* data;
	void LoadBMP(const char* filename);
	void LoadParamater();
public: 
	Material();
	~Material();
	void Enable();
	void Disable();
	
	void Init(const char* filename);
	void SetColor(float R, float G, float B);
};

