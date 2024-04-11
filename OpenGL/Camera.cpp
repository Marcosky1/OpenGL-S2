#include "Camera.h"
#include "IncludeGL.h"
#include <cmath>

Camera::Camera() : movementSpeed(0.1f) {
    position.SetPosition(2.5f, 2.5f, 2.5f);
    direction.SetDirection(0.0f, 0.0f, -1.0f); // Por defecto, mira hacia adelante en el eje negativo z
}

void Camera::UpdateCamera() {
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    // Calcula el punto hacia el cual la cámara está mirando
    Vector3 target = position + direction;
    // Llama a gluLookAt con la posición de la cámara, el punto hacia el cual mira y el vector de arriba (0, 1, 0)
    gluLookAt(position.x, position.y, position.z, target.x, target.y, target.z, 0, 1, 0);
}

void Camera::MoveForward() {
    // Mueve la cámara hacia adelante en la dirección en la que está mirando
    position += direction * movementSpeed;
}

void Camera::MoveBackward() {
    // Mueve la cámara hacia atrás en la dirección opuesta a la que está mirando
    position -= direction * movementSpeed;
}
