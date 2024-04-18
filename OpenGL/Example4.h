#pragma once
#include "Example.h"
#include "SpotLight.h"
#include "DirectionLight.h"
#include "PointLight.h"
#include "Esfera.h"

class Example4 : public Example {
public:
    Example4();
    virtual void init() override;
    virtual void Render() override;
    virtual void KeyboardFunc(unsigned char key, int X, int Y) override;
    virtual void Idle() override;

    void DrawGrid();

    SpotLight spotLight;
    DirectionLight dirLight;
    PointLight pointLight;
    Esfera esfera;
};
