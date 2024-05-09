#pragma once
#include "Figura.h"
class Figura3D: public Figura
{
public : 
	Figura3D();
    virtual void init() = 0;
    virtual void RenderVertexArraySimple() = 0;
    virtual void RenderVertexArrayIndexado() = 0;
    virtual void RenderVertexArrayInstanciado() = 0;
};


