set(SRCS_MINUS_MAIN ${SRCS})
list(REMOVE_ITEM SRCS_MINUS_MAIN ${MY_PROJECT}/src/main.cpp)

file(GLOB SUB_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
)

add_executable(${SUB_BINARY} ${SUB_PROJ} ${SRCS_MINUS_MAIN})

target_include_directories(${SUB_PROJ} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
