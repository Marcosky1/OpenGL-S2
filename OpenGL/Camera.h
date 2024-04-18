#pragma once
#include "Vector3.h"

class Camera {
public:
    Camera();

    void UpdateCamera();
    void MoveForward();
    void MoveBackward();
    void StrafeLeft();
    void StrafeRight();
    Vector3 getPosition();

private:
    Vector3 position;
    Vector3 direction;
    Vector3 right;
    float movementSpeed; // Velocidad de movimiento de la cámara
};
