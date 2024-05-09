#include "Cubo.h"
#include "IncludeGL.h"

void Cubo::Render()
{
    material->Enable();
    RenderCubo();
    material->Disable();
}

void Cubo:: RenderNomaterial()
{
    RenderCubo();
}

void Cubo::RenderCubo()
{
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
}


Cubo::Cubo() : numIndices(36) {}

void Cubo::init() {
    // Definir los datos de vértices del cubo
    GLfloat vertices[] = {
        // Cara frontal
        -0.25f, -0.25f, 0.25f, 
         0.25f, -0.25f, 0.25f, 
         0.25f,  0.25f, 0.25f, 
        -0.25f,  0.25f, 0.25f, 
        // Cara posterior
        -0.25f, -0.25f, -0.25f, 
        -0.25f,  0.25f, -0.25f, 
         0.25f,  0.25f, -0.25f, 
         0.25f, -0.25f, -0.25f, 
        // Cara superior
        -0.25f,  0.25f, -0.25f, 
        -0.25f,  0.25f,  0.25f,
         0.25f,  0.25f,  0.25f, 
         0.25f,  0.25f, -0.25f, 
        // Cara inferior
        -0.25f, -0.25f, -0.25f,
         0.25f, -0.25f, -0.25f,
         0.25f, -0.25f,  0.25f,
        -0.25f, -0.25f,  0.25f,
        // Cara izquierda
        -0.25f, -0.25f, -0.25f, 
        -0.25f, -0.25f,  0.25f, 
        -0.25f,  0.25f,  0.25f,
        -0.25f,  0.25f, -0.25f,
        // Cara derecha
         0.25f, -0.25f, -0.25f,
         0.25f,  0.25f, -0.25f, 
         0.25f,  0.25f,  0.25f, 
         0.25f, -0.25f,  0.25f  
    };

    GLuint indices[] = {
        0, 1, 2, 3, 
        4, 5, 6, 7, 
        8, 9, 10, 11, 
        12, 13, 14, 15, 
        16, 17, 18, 19, 
        20, 21, 22, 23  
    };

    // Crear el VBO para los datos de vértices
    glGenBuffers(1, &vboSimple);
    glBindBuffer(GL_ARRAY_BUFFER, vboSimple);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    // Especificar el diseño del buffer de vértices
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (void*)0);
    glEnableVertexAttribArray(0);

    // Desvincular el VAO
    glBindVertexArray(0);

    // Crear el VAO y VBO para la representación indexada
    glGenVertexArrays(1, &vaoIndexado);
    glGenBuffers(1, &vboIndexado);
    glGenBuffers(1, &eboIndexado);
    glBindVertexArray(vaoIndexado);

    // Enlazar el VBO para los datos de vértices
    glBindBuffer(GL_ARRAY_BUFFER, vboIndexado);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    // Enlazar el EBO para los índices
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, eboIndexado);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

    // Especificar el diseño del buffer de vértices
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (void*)0);
    glEnableVertexAttribArray(0);

    // Desvincular el VAO
    glBindVertexArray(0);

    // Guardar el número de índices para la representación indexada
    numIndices = sizeof(indices) / sizeof(indices[0]);

    // Crear el VAO y VBO para la representación instanciada
    glGenVertexArrays(1, &vaoInstanciado);
    glBindVertexArray(vaoInstanciado);

    // Enlazar el VBO para los datos de vértices
    glBindBuffer(GL_ARRAY_BUFFER, vboSimple);

    // Especificar el diseño del buffer de vértices (posición)
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (void*)0);
    glEnableVertexAttribArray(0);

    // Configurar la división de instancias
    glVertexAttribDivisor(0, 1);

    // Desvincular el VAO
    glBindVertexArray(0);
}

void Cubo::RenderVertexArraySimple() {
    glBindVertexArray(vaoSimple);
    glDrawArrays(GL_QUADS, 0, 24);
}

void Cubo::RenderVertexArrayIndexado() {
    glBindVertexArray(vaoIndexado);
    glDrawElements(GL_QUADS, numIndices, GL_UNSIGNED_INT, 0);
}

void Cubo::RenderVertexArrayInstanciado() {
    glBindVertexArray(vaoInstanciado);
    glDrawArraysInstanced(GL_QUADS, 0, 24, 5); // Renderizar 5 instancias
}
