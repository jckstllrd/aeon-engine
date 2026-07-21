#include "VAO.h"
#include "VBO.h"

VAO::VAO() { glGenVertexArrays(1, &ID); }

void VAO::LinkVBO(GLuint layout, GLuint size, float stride, int pointer) {
  glVertexAttribPointer(layout, size, GL_FLOAT, GL_FALSE,
                        stride * sizeof(float),
                        reinterpret_cast<void *>(pointer * sizeof(float)));
  glEnableVertexAttribArray(layout);
}

void VAO::Bind() { glBindVertexArray(ID); }

void VAO::Unbind() { glBindVertexArray(0); }
void VAO::Delete() { glDeleteVertexArrays(1, &ID); }
