cmake_minimum_required(VERSION 3.5.1)
project(directory_test)
set(CMAKE_BUILD_TYPE Release)

# Bring the headers, such as Student.h into the project
include_directories(include)

# Add sources
file(GLOB SOURCES "src/*.cpp")

# Generate the shared library from the sources
add_library(testStudent SHARED ${SOURCES})

# Set the location for library installation
# Use "sudo make install" to apply
install(TARGETS testStudent DESTINATION lib)
