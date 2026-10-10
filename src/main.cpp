#include "raylib.h"

int main() {
    InitWindow(800, 600, "Slots");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(DARKGREEN);
        DrawText("It works!", 320, 280, 30, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
}
