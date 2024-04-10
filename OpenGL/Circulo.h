#pragma once
#include "Figura2D.h"
class Circulo :
    public Figura2D
{
public:
    Circulo();
    virtual void Render() override;
    int segments;
    float radius;
};

