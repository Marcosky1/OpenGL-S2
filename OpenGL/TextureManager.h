#pragma once
#include "IncludeGL.h"

class TextureManager
{
public:
    TextureManager();
    GLint LoadParameter();
    GLuint idTextura;
    unsigned int width, height;
    unsigned char* data;
};

