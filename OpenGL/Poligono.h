#pragma once
#include <vector>
#include "Punto3D.h"

class Poligono {
public:
    Poligono();
    void agregarPunto(const Punto3D& punto);
    void dibujar() const;

private:
    std::vector<Punto3D> m_puntos;
};

