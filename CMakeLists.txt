# version 3.11 or later of CMake needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.18)

project(
    TestApp
    VERSION 0.1
    DESCRIPTION "Small CMake example built with VSCode")


#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${${CMAKE_SOURCE_DIR}}/obj)
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${${CMAKE_SOURCE_DIR}R}/lib)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${${CMAKE_SOURCE_DIR}}/bin)

add_subdirectory(apps)   # look in hello subdirectory for CMakeLists.txt to process
add_subdirectory(libs)   # look in hello subdirectory for CMakeLists.txt to process
