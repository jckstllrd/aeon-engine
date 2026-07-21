#ifndef VAO_CLASS_H
#define VAO_CLASS_H

#include "VBO.h"
#include <glad/glad.h>

class VAO {
    public: 
        GLuint ID;
        VAO();

        void LinkVBO(GLuint layout, GLuint size, float stride, int pointer);
        void Bind();
        void Unbind();
        void Delete();

};

#endif
