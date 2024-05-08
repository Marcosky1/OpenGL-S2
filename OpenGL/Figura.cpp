#include "Figura.h"
#include "IncludeGL.h"

Figura::Figura() {

}

void Figura::RenderNomaterial()
{
	
}

void Figura::initMaterail(const char* filename)
{
	material = new Material();
	material->Init(filename);
}

Material* Figura::GetMaterial()
{
	return material;
}


	