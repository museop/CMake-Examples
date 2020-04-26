cmake_minimum_required(VERSION 2.8)

set(SRC_FILES main.c foo.c bar.c)

add_executable(app.out ${SRC_FILES})
set_target_properties(app.out PROPERTIES RUNTIME_OUTPUT_DIRECTORY ../output/bin)

add_library(appa STATIC foo.c bar.c)
set_target_properties(appa PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ../output/lib)

add_library(apps SHARED foo.c bar.c)
set_target_properties(apps PROPERTIES LIBRARY_OUTPUT_DIRECTORY ../output/lib)