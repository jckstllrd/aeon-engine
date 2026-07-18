cmake_minimum_required(3.15)
project(aeon-engine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(aeon_engine main.cpp)

target_include_directories(aeon_program PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/third_party/glfw/include
)

target_link_libraries(aeon_program PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/third_party/glfw/lib/libglfw3.a
)

target_link_libraries(aeon_program PRIVATE 
    "-framework Cocoa"
    "-framework OpenGL"
    "-framework IOKit"
)
