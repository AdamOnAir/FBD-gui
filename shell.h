#ifndef SHELL_H
#define SHELL_H

#include "joke.h"
#include "raylib.h"
#include <string.h>

#define MAX_INPUT_CHARS 256
#define MAX_OUTPUT_CHARS 1024

void runShell(void) {
    char input[MAX_INPUT_CHARS] = "\0";
    char output[MAX_OUTPUT_CHARS] = "\0";
    int letterCount = 0;

    Rectangle textBox = { 200, 180, 400, 50 };
    bool mouseOnText = false;

    while (!WindowShouldClose()) {
        // Handle input
        if (CheckCollisionPointRec(GetMousePosition(), textBox)) mouseOnText = true;
        else mouseOnText = false;

        if (mouseOnText) {
            SetMouseCursor(MOUSE_CURSOR_IBEAM);
            int key = GetCharPressed();
            while (key > 0) {
                if ((key >= 32) && (key <= 125) && (letterCount < MAX_INPUT_CHARS)) {
                    input[letterCount] = (char)key;
                    input[letterCount+1] = '\0';
                    letterCount++;
                }
                key = GetCharPressed();
            }

            if (IsKeyPressed(KEY_BACKSPACE)) {
                letterCount--;
                if (letterCount < 0) letterCount = 0;
                input[letterCount] = '\0';
            }

            if (IsKeyPressed(KEY_ENTER)) {
                if (strcmp(input, "help") == 0) {
                    strcpy(output, "Available commands: help, joke, quit");
                } else if (strcmp(input, "joke") == 0) {
                    joke();
                    strcpy(output, puns[rand() % (sizeof(puns) / sizeof(char *))]);
                } else if (strcmp(input, "exit") == 0) {
                    CloseWindow();
                } else {
                    strcpy(output, "Unknown command. Type 'help' for a list of commands.");
                }
                letterCount = 0;
                input[0] = '\0';
            }
        } else SetMouseCursor(MOUSE_CURSOR_DEFAULT);

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangleRec(textBox, LIGHTGRAY);
        DrawRectangleLines((int)textBox.x, (int)textBox.y, (int)textBox.width, (int)textBox.height, DARKGRAY);
        DrawText(input, (int)textBox.x + 5, (int)textBox.y + 8, 40, MAROON);
        DrawText("Enter a command:", 240, 140, 20, DARKGRAY);
        DrawText(output, 200, 240, 20, DARKGRAY);
        EndDrawing();
    }
}

#endif // SHELL_H
