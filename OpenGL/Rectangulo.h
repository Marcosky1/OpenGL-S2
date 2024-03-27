#pragma once
#include "FiguraGeometrica.h"
#include "Punto.h"

class Rectangulo : public FiguraGeometrica {
public:
    Rectangulo(float ancho, float alto, const Punto& origen);
    virtual void dibujar() const override;
private:
    float m_ancho;
    float m_alto;
    Punto m_origen;
};
