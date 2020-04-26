cmake_minimum_required(VERSION 2.8)

project(SIMPLE_SUB_PORJECT)

include_directories(include)

file(GLOB SRCS
    ${PROJECT_SOURCE_DIR}/src/*.c
    ${PROJECT_SOURCE_DIR}/src/*.cpp
)

set(MAIN_PROJ app.out)
add_subdirectory(src)

set(SUB_PROJ subapp.out)
add_subdirectory(subproject)