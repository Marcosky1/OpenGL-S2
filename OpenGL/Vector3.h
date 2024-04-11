#pragma once
#include <cmath>
class Vector3 {
public:
    float x, y, z;

    Vector3();
    Vector3(float x, float y, float z);

    void SetPosition(float x, float y, float z);
    void SetDirection(float x, float y, float z);

    // Sobrecarga de operadores
    Vector3 operator+(const Vector3& other) const;
    Vector3 operator-(const Vector3& other) const;
    Vector3 operator*(float scalar) const;
    Vector3& operator+=(const Vector3& other);
    Vector3& operator-=(const Vector3& other);
    Vector3& operator*=(float scalar);
};
