#include "IncludeGL.h"
#include <cmath>
#include "Camera.h"

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

void Camera::StrafeLeft() {
    // Mueve la cámara hacia la izquierda en relación con su dirección hacia adelante
    Vector3 left = Vector3(-direction.z, 0.0f, direction.x); // Calcula el vector perpendicular hacia la izquierda
    position -= left * movementSpeed;
}

void Camera::StrafeRight() {
    // Mueve la cámara hacia la derecha en relación con su dirección hacia adelante
    Vector3 right = Vector3(-direction.z, 0.0f, direction.x); // Calcula el vector perpendicular hacia la derecha
    position += right * movementSpeed;
}

Vector3 Camera::getPosition() {
    return position;
}
