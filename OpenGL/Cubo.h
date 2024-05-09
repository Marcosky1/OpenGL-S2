
#include "Figura3D.h"
class Cubo :
    public Figura3D
{
public :
    Cubo();
    virtual void Render() override;
    virtual void RenderNomaterial() override;
private:
    void RenderCubo();
};


