cmake_minimum_required(VERSION 3.16)
project(Project1 C)

set(CMAKE_C_STANDARD 99)

add_executable(Project1 sqlist_c/main.c sqlist_c/SqlistApp.c sqlist_h/SqlistDef.h sqlist_h/CommonDef.h)