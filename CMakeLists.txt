cmake_minimum_required(VERSION 3.5)

project(project LANGUAGES C)
LINK_LIBRARIES(m)
add_executable(c-test main.c alluse.c add.c)
