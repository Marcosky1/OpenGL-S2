// Scaling.h
#pragma once

class Scaling {
public:
    Scaling(float factor = 1.0f);
    void apply();
    void setScale(float factor);

private:
    float factor;
};