cmake_minimum_required(VERSION 3.8)
project(Examen2Progra3Zebra)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Evaluador.cpp Evaluador.h Libro.cpp Libro.h NodoBinario.cpp NodoBinario.h)
add_executable(Examen2Progra3Zebra ${SOURCE_FILES})