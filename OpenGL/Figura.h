#pragma once
#include "Material.h"

#include "Transform.h"
class Figura
{
protected:
	Material* material;
public :
	Figura();
	virtual void Render()=0;
	virtual void RenderNomaterial();
	virtual void initMaterail(const char* filename) ;
	Transform  transform;
	Material* GetMaterial();

};



