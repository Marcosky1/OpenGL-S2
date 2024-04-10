#pragma once
#include "Example.h"

class Example2 : public Example {
public:
    Example2();

    virtual void init() override;
    virtual void Render() override;
    virtual void KeyboardFunc(unsigned char key, int X, int Y) override;
    virtual void Idle() override;

private:
    void DrawPoint();
    void DrawLine();
    void DrawAxis();
    void DrawGrid();

    float cameraX, cameraY, cameraZ; // Posición de la cámara
    float cameraYaw; // Ángulo de rotación de la cámara
    float cameraSpeed; // Velocidad de movimiento de la cámara
};



