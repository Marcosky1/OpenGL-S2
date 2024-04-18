// Translation.cpp
#include "Translation.h"
#include "IncludeGL.h"

Translation::Translation(float dx, float dy, float dz) : dx(dx), dy(dy), dz(dz) {}

void Translation::apply() {
    glTranslatef(dx, dy, dz);
}

void Translation::setTranslation(float dx, float dy, float dz) {
    this->dx = dx;
    this->dy = dy;
    this->dz = dz;
}
