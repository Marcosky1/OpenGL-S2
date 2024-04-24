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
    glVertex3f(-0.5, -0.5, 0.5); // Abajo-izquierda
    glVertex3f(0.5, -0.5, 0.5);  // Abajo-derecha
    glVertex3f(0.5, 0.5, 0.5);   // Arriba-derecha
    glVertex3f(-0.5, 0.5, 0.5);  // Arriba-izquierda

    // Cara posterior
    glVertex3f(-0.5, -0.5, -0.5); // Abajo-izquierda
    glVertex3f(-0.5, 0.5, -0.5);  // Arriba-izquierda
    glVertex3f(0.5, 0.5, -0.5);   // Arriba-derecha
    glVertex3f(0.5, -0.5, -0.5);  // Abajo-derecha

    // Cara superior
    glVertex3f(-0.5, 0.5, -0.5); // Frente-izquierda
    glVertex3f(-0.5, 0.5, 0.5);  // Frente-derecha
    glVertex3f(0.5, 0.5, 0.5);   // Trasero-derecha
    glVertex3f(0.5, 0.5, -0.5);  // Trasero-izquierda

    // Cara inferior
    glVertex3f(-0.5, -0.5, -0.5); // Frente-izquierda
    glVertex3f(0.5, -0.5, -0.5);  // Frente-derecha
    glVertex3f(0.5, -0.5, 0.5);   // Trasero-derecha
    glVertex3f(-0.5, -0.5, 0.5);  // Trasero-izquierda

    // Cara izquierda
    glVertex3f(-0.5, -0.5, -0.5); // Abajo-atras
    glVertex3f(-0.5, -0.5, 0.5);  // Abajo-frente
    glVertex3f(-0.5, 0.5, 0.5);   // Arriba-frente
    glVertex3f(-0.5, 0.5, -0.5);  // Arriba-atras

    // Cara derecha
    glVertex3f(0.5, -0.5, -0.5); // Abajo-atras
    glVertex3f(0.5, 0.5, -0.5);  // Arriba-atras
    glVertex3f(0.5, 0.5, 0.5);   // Arriba-frente
    glVertex3f(0.5, -0.5, 0.5);  // Abajo-frente

    glEnd();

    glPopMatrix();
    material->Disable();
}
