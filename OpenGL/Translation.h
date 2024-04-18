#pragma once

class Translation {
public:
    Translation(float dx = 0.0f, float dy = 0.0f, float dz = 0.0f);
    void apply();
    void setTranslation(float dx, float dy, float dz);

private:
    float dx, dy, dz;
};


