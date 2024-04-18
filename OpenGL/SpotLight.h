#pragma once
#include "LightD.h"
#include "LightP.h"
#include "Vector3.h"

class SpotLight : public LightD, public LightP {
public:
    GLenum fuente;
    virtual void init() override;
private:
    Vector3 targetPosition;
    Vector3 lightPosition;
};