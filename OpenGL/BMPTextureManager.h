#pragma once
#include "TextureManager.h"

class BMPTextureManager :
    public TextureManager
{
public : 
    BMPTextureManager();
    GLuint LoadBMP(const char* fileName);

};

