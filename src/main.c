#include <raylib.h>

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

int main() {
  // init
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "surviavalist");
  SetTargetFPS(60);

  // background
  Texture2D background1 = LoadTexture("assets/background/background_1.png");
  // background

  // init

  // game loop

  while (!WindowShouldClose()) {
    // update

    // update

    // draw
    BeginDrawing();
    DrawTexture(background1, 0, 0, WHITE);
    EndDrawing();
    // draw
  }

  // game loop

  // deinit
  UnloadTexture(background1);
  // deinit
  CloseWindow();

  return 0;
}
