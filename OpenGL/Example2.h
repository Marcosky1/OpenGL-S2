#pragma once
#include "Example.h"
#include "Camera.h" 

class Example2 : public Example {
public:
    Example2();

    virtual void init() override;
    virtual void Render() override;
    virtual void KeyboardFunc(unsigned char key, int X, int Y) override;
    virtual void Idle() override;
    Camera camera;
    void DrawPoint();
    void DrawLine();
    void DrawAxis();
    void DrawGrid();
};


