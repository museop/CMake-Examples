cmake_minimum_required( VERSION 3.5.1 )
project( TestLibrary )

# For the shared library:
set( PROJECT_LINK_LIBS libtestStudent.so )
link_directories( library )

# For the static library:
set( PROJECT_LINK_LIBS libtestStudent.a )
link_directories( library )

include_directories( include )

add_executable( libtest libtest.cpp )
target_link_libraries( libtest ${PROJECT_LINK_LIBS} )
