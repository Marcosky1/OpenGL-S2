#include "Poligono.h"
#include <GL/glut.h>

Poligono::Poligono() {}

void Poligono::agregarPunto(const Punto3D& punto) {
    m_puntos.push_back(punto);
}

void Poligono::dibujar() const {
    glBegin(GL_LINE_LOOP);
    for (const auto& punto : m_puntos) {
        glVertex3f(punto.getX(), punto.getY(), punto.getZ());
    }
    glEnd();
}
