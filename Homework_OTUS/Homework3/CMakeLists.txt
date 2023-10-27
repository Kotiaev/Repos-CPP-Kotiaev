cmake_minimum_required(VERSION 3.5)

project(Homework)

add_executable (Homework Homework.cpp
)


target_compile_features(Homework PUBLIC cxx_std_17)

if (MSVC)
    target_compile_options(Homework PUBLIC /W1)
else()
    target_compile_options(Homework PUBLIC  -pedantic)
endif()


