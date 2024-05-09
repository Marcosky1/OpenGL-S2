#include "Figura3D.h"
class Esfera :
    public Figura3D
{
public:
    virtual void init() override;
    virtual void RenderVertexArraySimple() override;
    virtual void RenderVertexArrayIndexado() override;
    virtual void RenderVertexArrayInstanciado() override;

    Esfera(); 
    virtual void Render() override;
    float radius = 1;
    float slice = 20;
    float stacks = 20;
};

