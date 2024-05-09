
#include "Figura3D.h"
class Cubo :
    public Figura3D
{
public :
    Cubo();
    virtual void Render() override;
    virtual void RenderNomaterial() override;

    virtual void init() override;
    virtual void RenderVertexArraySimple() override;
    virtual void RenderVertexArrayIndexado() override;
    virtual void RenderVertexArrayInstanciado() override;
private:
    void RenderCubo();

    GLuint vaoSimple, vaoIndexado, vaoInstanciado;
    GLuint vboSimple;
    GLuint vboIndexado;
    GLuint eboIndexado;
    int numIndices;
};


