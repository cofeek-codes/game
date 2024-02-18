#include <raylib.h>

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

int main() {
  // init
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "surviavalist");
  SetTargetFPS(60);

  // background
  Texture2D background1 = LoadTexture("/background_1.png");
  Texture2D background2 = LoadTexture("/assets/background/background_2.png");
  Texture2D background3 = LoadTexture("/assets/background/background_3.png");
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

  // deinit
  CloseWindow();
}
