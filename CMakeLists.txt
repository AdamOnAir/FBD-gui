cmake_minimum_required(VERSION 3.28)
project(FBD-gui C)

set(CMAKE_C_STANDARD 11)

# Update the paths to raylib
set(RAYLIB_INCLUDE_DIR "C:/Users/Adam/raylib-mingw/include")
set(RAYLIB_LIB_DIR "C:/Users/Adam/raylib-mingw/lib")

# Add the include and link directories for raylib
include_directories(${RAYLIB_INCLUDE_DIR})
link_directories(${RAYLIB_LIB_DIR})

add_executable(FBD_gui main.c
        joke.h
        shell.h)

# Link the raylib library
target_link_libraries(FBD_gui raylib winmm gdi32)
