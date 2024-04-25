#pragma once
#include "Example.h"
#include "Figura.h"
#include "BMPTextureManager.h"

class Example7 :
    public Example
{
public:
    Example7();

    virtual void init() override;
    virtual void Render() override;
    virtual void KeyboardFunc(unsigned char key, int X, int Y)override;
    virtual void Idle() override;

private:

    Figura* cubo;
    GLuint cubodisplayListID1;
    GLuint ListadeCubodisplayListID2;
};
