cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_STANDART 20)

project(cadoge)

add_executable(${PROJECT_NAME} src/main.cc)

add_subdirectory(src)

target_link_libraries(${PROJECT_NAME} PRIVATE src raylib)
