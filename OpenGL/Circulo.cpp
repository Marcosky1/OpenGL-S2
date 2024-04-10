#include "Circulo.h"
#include "IncludeGL.h"
#include <cmath>

Circulo::Circulo()
{
}

void Circulo::Render()
{
    glColor3f(color.red, color.blue, color.green);
    glPushMatrix();
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.0f);
    for (int i = 0; i <= segments; ++i) {
        float angle = 2.0f * 3.14159f * static_cast<float>(i) / static_cast<float>(segments);
        glVertex2f(radius * cos(angle), radius * sin(angle));
    }
    glEnd();
    glPopMatrix();
}
