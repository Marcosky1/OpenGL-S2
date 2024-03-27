#include "Punto3D.h"

Punto3D::Punto3D(float x, float y, float z) : m_x(x), m_y(y), m_z(z) {}

float Punto3D::getX() const {
    return m_x;
}

float Punto3D::getY() const {
    return m_y;
}

float Punto3D::getZ() const {
    return m_z;
}

void Punto3D::setX(float x) {
    m_x = x;
}

void Punto3D::setY(float y) {
    m_y = y;
}

void Punto3D::setZ(float z) {
    m_z = z;
}
