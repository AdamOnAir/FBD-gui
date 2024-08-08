cmake_minimum_required(VERSION 3.15)
project(FBD-gui 11)



add_executable(FBD-gui main.c
	      include/joke.h
	      include/shell.h
	      include/raylib.h)



install(TARGETS FBD-gui DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
