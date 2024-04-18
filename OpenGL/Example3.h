
#pragma once
#include "Example.h"
#include "Cubo.h"

class Example3 : public Example {
public:
    Example3();

    virtual void init() override;
    virtual void Render() override;
    virtual void KeyboardFunc(unsigned char key, int X, int Y) override;
    virtual void Idle() override;

    void DrawGrid();

    float cubeX, cubeY, cubeZ; 
    float cubeAngle; 
    float cubeScale;
    Cubo cubo;
};