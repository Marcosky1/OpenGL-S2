#include "SpotLight.h"

void SpotLight::init() {
    LightD::Light_diretion[3] = 1.0f; 
    glLightfv(fuente, GL_POSITION, LightD::Light_diretion);

    GLfloat spotDirection[] = {
        targetPosition.x - lightPosition.x,
        targetPosition.y - lightPosition.y,
        targetPosition.z - lightPosition.z,
    };

    GLfloat length = sqrt(spotDirection[0] * spotDirection[0] + spotDirection[1] * spotDirection[1] + spotDirection[2] * spotDirection[2]);
    if (length > 0) {
        spotDirection[0] /= length;
        spotDirection[1] /= length;
        spotDirection[2] /= length;
    }

    glLightfv(fuente, GL_SPOT_DIRECTION, spotDirection);

    GLfloat spotCutoff = 45.0f; 
    glLightf(fuente, GL_SPOT_CUTOFF, spotCutoff);
}
