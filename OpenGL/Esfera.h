#include "Figura3D.h"
class Esfera :
    public Figura3D
{
public:

    Esfera(); 
    virtual void Render() override;
    float radius = 1;
    float slice = 20;
    float stacks = 20;
};

