
#pragma once
#include "Example.h"
#include "Figura.h"

class Example3 : public Example {
public:
    Example3();

    virtual void init() override;
    virtual void Render() override;
    virtual void KeyboardFunc(unsigned char key, int X, int Y) override;
    virtual void Idle() override;

    void DrawPoint();
    void DrawLine();

    float cubeX, cubeY, cubeZ; 
    float cubeAngle; 
    float cubeScale;
    Figura* cubo;
};