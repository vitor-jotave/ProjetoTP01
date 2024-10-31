cmake_minimum_required(VERSION 3.29)
project(ProjetoTP01)

set(CMAKE_CXX_STANDARD 20)

add_executable(ProjetoTP01 main.cpp
        dominios.h
        dominios.cpp
        entidades.h
        entidades.cpp
        testes.h
        testes.cpp)
