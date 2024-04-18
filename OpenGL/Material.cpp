#include "Material.h"
#include"BMPTextureManager.h"
#include <cstdio>

Material::Material()
{
}

Material::~Material()
{
    if (idTextura != 0) {
        glDeleteTextures(1, &idTextura);
        idTextura = 0;
    }
}

void Material::Enable()
{
    glColor3f(color.red, color.blue, color.green);
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_TEXTURE_GEN_S); //enable texture coordinate generation
    glEnable(GL_TEXTURE_GEN_T);
    glBindTexture(GL_TEXTURE_2D, idTextura);
}

void Material::Disable()
{
    glDisable(GL_TEXTURE_GEN_S); //enable texture coordinate generation
    glDisable(GL_TEXTURE_GEN_T);
    glDisable(GL_TEXTURE_2D);

}

void Material::Init(const char* filename)
{
    LoadBMP(filename);
}

void Material::SetColor(float R, float G, float B)
{
    color.red = R;
    color.green = G;
    color.blue = B;
}

void Material::LoadBMP(const char* filename)
{
    FILE* file;
    unsigned char header[54];
    unsigned int dataPos;
    unsigned int size;
    file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("Error allocating space for image");
        return ;
    }
    if (fread(header, 1, 54, file) != 54)
    {
        printf("Error nvaild file for image");
        return ;
    }
    if (header[0] != 'B' || header[1] != 'M')
    {
        MessageBox(NULL, L"Error: Invaild file!", L"Error", MB_OK);
        return ;
    }
    dataPos = *(int*)&(header[0x0A]);
    size = *(int*)&(header[0x22]);
    width = *(int*)&(header[0x12]);
    height = *(int*)&(header[0x16]);
    if (size == NULL)
        size = width * height * 3;
    if (dataPos == NULL)
        dataPos = 54;
    data = new unsigned char[size];
    fread(data, 1, size, file);
    fclose(file);
    LoadParamater();
}

void Material::LoadParamater()
{
    glGenTextures(1, &idTextura);
    glBindTexture(GL_TEXTURE_2D, idTextura);
    //glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    gluBuild2DMipmaps(GL_TEXTURE_2D, 4, width, height, GL_RGB, GL_UNSIGNED_BYTE, data);

    //glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
    
}
