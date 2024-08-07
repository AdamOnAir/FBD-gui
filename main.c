#include "raylib.h"
#include "shell.h"

// Program main entry point
int main(void) {
    // Initialization

    const int screenWidth = 1000;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "FBD - Raylib");

    const char message[128] = "Type \'help\' to get a command list.";

    int framesCounter = 0;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second


    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key {
        runShell();
    // De-Initialization
    
    CloseWindow();        // Close window and OpenGL context
    

    return 0;
}
