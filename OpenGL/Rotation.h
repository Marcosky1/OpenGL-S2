// Rotation.h
#pragma once

class Rotation {
public:
    Rotation(float angle = 0.0f, float axisX = 0.0f, float axisY = 0.0f, float axisZ = 0.0f);
    void apply();
    void setRotation(float angle, float axisX, float axisY, float axisZ);

private:
    float angle, axisX, axisY, axisZ;
};

