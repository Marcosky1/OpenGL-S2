#pragma once

class Punto {
public:
    Punto(float x = 0.0f, float y = 0.0f) : m_x(x), m_y(y) {}
    float getX() const { return m_x; }
    float getY() const { return m_y; }
    void setX(float x) { m_x = x; }
    void setY(float y) { m_y = y; }
private:
    float m_x;
    float m_y;
};
