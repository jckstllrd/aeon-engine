cmake_minimum_required(VERSION 3.15)
project(aeon-engine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(aeon-engine main.cpp third_party/glad/src/glad.c)


target_include_directories(aeon-engine PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/third_party/glfw/include
    ${CMAKE_CURRENT_SOURCE_DIR}/third_party/glad/include
)

target_link_libraries(aeon-engine PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/third_party/glfw/lib/libglfw3.a
)

target_link_libraries(aeon-engine PRIVATE 
    "-framework Cocoa"
    "-framework OpenGL"
    "-framework IOKit"
)
