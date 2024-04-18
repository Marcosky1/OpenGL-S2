// Scaling.cpp
#include "Scaling.h"
#include "IncludeGL.h"

Scaling::Scaling(float factor) : factor(factor) {}

void Scaling::apply() {
    glScalef(factor, factor, factor);
}

void Scaling::setScale(float factor) {
    this->factor = factor;
}
