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
    // Calcula el punto hacia el cual la c�mara est� mirando
    Vector3 target = position + direction;
    // Llama a gluLookAt con la posici�n de la c�mara, el punto hacia el cual mira y el vector de arriba (0, 1, 0)
    gluLookAt(position.x, position.y, position.z, target.x, target.y, target.z, 0, 1, 0);
}

void Camera::MoveForward() {
    // Mueve la c�mara hacia adelante en la direcci�n en la que est� mirando
    position += direction * movementSpeed;
}

void Camera::MoveBackward() {
    // Mueve la c�mara hacia atr�s en la direcci�n opuesta a la que est� mirando
    position -= direction * movementSpeed;
}

void Camera::StrafeLeft() {
    // Mueve la c�mara hacia la izquierda en relaci�n con su direcci�n hacia adelante
    Vector3 left = Vector3(-direction.z, 0.0f, direction.x); // Calcula el vector perpendicular hacia la izquierda
    position -= left * movementSpeed;
}

void Camera::StrafeRight() {
    // Mueve la c�mara hacia la derecha en relaci�n con su direcci�n hacia adelante
    Vector3 right = Vector3(-direction.z, 0.0f, direction.x); // Calcula el vector perpendicular hacia la derecha
    position += right * movementSpeed;
}

Vector3 Camera::getPosition() {
    return position;
}
