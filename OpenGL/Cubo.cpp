#include "Cubo.h"
#include "IncludeGL.h"

Cubo::Cubo()
{
	
}

void Cubo::Render()
{
    material->Enable();
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    
    glBegin(GL_QUADS);

    // Cara frontal
    glVertex3f(-0.25, -0.25, 0.25); // Abajo-izquierda
    glVertex3f(0.25, -0.25, 0.25);  // Abajo-derecha
    glVertex3f(0.25, 0.25, 0.25);   // Arriba-derecha
    glVertex3f(-0.25, 0.25, 0.25);  // Arriba-izquierda

    // Cara posterior
    glVertex3f(-0.25, -0.25, -0.25); // Abajo-izquierda
    glVertex3f(-0.25, 0.25, -0.25);  // Arriba-izquierda
    glVertex3f(0.25, 0.25, -0.25);   // Arriba-derecha
    glVertex3f(0.25, -0.25, -0.25);  // Abajo-derecha

    // Cara superior
    glVertex3f(-0.25, 0.25, -0.25); // Frente-izquierda
    glVertex3f(-0.25, 0.25, 0.25);  // Frente-derecha
    glVertex3f(0.25, 0.25, 0.25);   // Trasero-derecha
    glVertex3f(0.25, 0.25, -0.25);  // Trasero-izquierda

    // Cara inferior
    glVertex3f(-0.25, -0.25, -0.25); // Frente-izquierda
    glVertex3f(0.25, -0.25, -0.25);  // Frente-derecha
    glVertex3f(0.25, -0.25, 0.25);   // Trasero-derecha
    glVertex3f(-0.25, -0.25, 0.25);  // Trasero-izquierda

    // Cara izquierda
    glVertex3f(-0.25, -0.25, -0.25); // Abajo-atras
    glVertex3f(-0.25, -0.25, 0.25);  // Abajo-frente
    glVertex3f(-0.25, 0.25, 0.25);   // Arriba-frente
    glVertex3f(-0.25, 0.25, -0.25);  // Arriba-atras

    // Cara derecha
    glVertex3f(0.25, -0.25, -0.25); // Abajo-atras
    glVertex3f(0.25, 0.25, -0.25);  // Arriba-atras
    glVertex3f(0.25, 0.25, 0.25);   // Arriba-frente
    glVertex3f(0.25, -0.25, 0.25);  // Abajo-frente

    glEnd();

    glPopMatrix();
    material->Disable();
}
