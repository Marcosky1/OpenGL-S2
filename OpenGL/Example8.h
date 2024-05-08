#pragma once
#include "Example.h"


class Example8 : public Example
{
public:
    Example8();

    virtual void init() override;
    virtual void Render() override;
    virtual void KeyboardFunc(unsigned char key, int X, int Y) override;
    virtual void Idle() override;

};
