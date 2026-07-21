cmake_minimum_required(VERSION 3.15)
project(aeon-engine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(aeon-engine 
    src/main.cpp 
    libs/glad/src/glad.c 
    src/stb_image.cpp 
    src/VBO.cpp 
    src/EBO.cpp
    src/VAO.cpp
    include/VAO.h
    src/camera.cpp
)


target_include_directories(aeon-engine PRIVATE 
    libs
    libs/glad/include
    libs/glfw/include
    include
)

target_link_libraries(aeon-engine PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/libs/glfw/lib/libglfw3.a
)

target_link_libraries(aeon-engine PRIVATE 
    "-framework Cocoa"
    "-framework OpenGL"
    "-framework IOKit"
)
