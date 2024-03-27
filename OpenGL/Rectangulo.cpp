#include "Rectangulo.h"
#include <GL/glut.h>

Rectangulo::Rectangulo(float ancho, float alto, const Punto& origen)
    : m_ancho(ancho), m_alto(alto), m_origen(origen) {}

void Rectangulo::dibujar() const {
    glRectf(m_origen.getX(), m_origen.getY(), m_origen.getX() + m_ancho, m_origen.getY() + m_alto);
}
