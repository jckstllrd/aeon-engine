#ifndef CAMERA_CLASS_H
#define CAMERA_CLASS_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Camera {
public:

    Camera(float posX, float posY, float posZ, float roll ,float pitch, float yar, float fov = 70.0f);

    glm::vec3 Front();
    glm::vec3 Right();
    glm::vec3 Up();

    glm::mat4 GetViewMatrix();
    glm::mat4 GetProjectionMatrix();

    glm::vec3 m_position;
    glm::vec3 m_direction;
    float m_fov;
};

#endif
