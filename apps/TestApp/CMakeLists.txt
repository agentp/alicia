
# version 3.11 or later of CMake or needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.18)

project(TestApp)

add_executable(TestApp src/main.cpp)
# We need hello.h and the hello library
target_link_libraries(TestApp
    PRIVATE TestLib)

# Tell C++ compiler to use C++20 features. We don't actually use any of them.
target_compile_features(TestApp PUBLIC cxx_std_20)
