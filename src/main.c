#include "raylib.h"

int main(void) {
  int screenWidth = 1920;
  int screenHeight = 1080;

  InitWindow(screenWidth, screenHeight, "survivalist");

  Texture2D background_texture =
      LoadTexture("assets/background/background_1.png");

  SetWindowState(FLAG_FULLSCREEN_MODE);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    // Draw the texture stretched to fullscreen
    DrawTexturePro(
        background_texture,
        (Rectangle){0, 0, (float)background_texture.width,
                    (float)-background_texture.height},
        (Rectangle){0, 0, (float)GetScreenWidth(), (float)GetScreenHeight()},
        (Vector2){0, 0}, 0.0f, WHITE);

    EndDrawing();
  }

  // Unload the texture and close the window
  UnloadTexture(background_texture);
  CloseWindow();

  return 0;
}
