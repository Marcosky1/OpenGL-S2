#pragma once
#include "Figura.h"

class FiguraGeometrica : public Figura {
public:
    virtual void dibujar() const override = 0;
};
