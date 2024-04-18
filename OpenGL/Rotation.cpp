// Rotation.cpp
#include "Rotation.h"
#include "IncludeGL.h"

Rotation::Rotation(float angle, float axisX, float axisY, float axisZ) : angle(angle), axisX(axisX), axisY(axisY), axisZ(axisZ) {}

void Rotation::apply() {
    glRotatef(angle, axisX, axisY, axisZ);
}

void Rotation::setRotation(float angle, float axisX, float axisY, float axisZ) {
    this->angle = angle;
    this->axisX = axisX;
    this->axisY = axisY;
    this->axisZ = axisZ;
}
