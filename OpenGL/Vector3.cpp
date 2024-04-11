#include "Vector3.h"

Vector3::Vector3() : x(0.0f), y(0.0f), z(0.0f) {}

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

void Vector3::SetPosition(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

void Vector3::SetDirection(float x, float y, float z) {
    // Normaliza el vector de dirección
    float length = sqrt(x * x + y * y + z * z);
    if (length != 0) {
        this->x = x / length;
        this->y = y / length;
        this->z = z / length;
    }
    else {
        // Si la longitud es cero, no podemos normalizar, así que dejamos el vector de dirección como está
        this->x = x;
        this->y = y;
        this->z = z;
    }
}

Vector3 Vector3::operator+(const Vector3& other) const {
    return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const {
    return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator*(float scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

Vector3& Vector3::operator+=(const Vector3& other) {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

Vector3& Vector3::operator-=(const Vector3& other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}

Vector3& Vector3::operator*=(float scalar) {
    x *= scalar;
    y *= scalar;
    z *= scalar;
    return *this;
}
