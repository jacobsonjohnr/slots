#include "raylib.h"
#include "reel.h"

int main() {
    InitWindow(800, 600, "Slots");
    SetTargetFPS(60);
    int num = generateRandomNum(0, 6);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(DARKGREEN);
        DrawText(TextFormat("%d", num), 320, 280, 30, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
}
