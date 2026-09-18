cmake_minimum_required(VERSION 4.3)
project(secC C)

set(CMAKE_C_STANDARD 11)

add_executable(secC main.c
        mylib.h
        mylib.c)
