#pragma once
#include "Example.h"
#include "TextureManager.h"
#include "Cubo.h"
 

class Example6 : public Example
{
public:
    Example6();

    virtual void init() override;
    virtual void Render() override;
    virtual void KeyboardFunc(unsigned char key, int X, int Y) override;
    virtual void Idle() override;
    TextureManager* MytextureManager;
    Cubo cubo;
};

