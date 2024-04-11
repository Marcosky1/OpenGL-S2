#pragma once
#include "Vector3.h"

class Camera {
public:
    Camera();

    void UpdateCamera();
    void MoveForward();
    void MoveBackward();

private:
    Vector3 position;
    Vector3 direction;
    float movementSpeed; // Velocidad de movimiento de la cámara
};
