#pragma once

class Punto3D {
public:
    Punto3D(float x = 0.0f, float y = 0.0f, float z = 0.0f);
    float getX() const;
    float getY() const;
    float getZ() const;
    void setX(float x);
    void setY(float y);
    void setZ(float z);

private:
    float m_x;
    float m_y;
    float m_z;
};

