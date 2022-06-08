cmake_minimum_required(VERSION 3.21)

#project name
project(broken)

# build a compilation database, usable by clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# enable debug info & all warnings
add_compile_options(-g -Wall)

# pickup elite
add_executable(broken main.c module.c module.h)
