#include "raylib.h"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

// game constants

#define GROUND_HEIGHT 3

// game functions

void DrawRockCol(Texture2D texture, int x) {
  for (int i = 0; i < GROUND_HEIGHT + 1; ++i) {
    DrawTexture(texture, (x * texture.width),
                GetScreenHeight() - (texture.height * i), WHITE);
  }
}

int main(void) {

  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "survivalist");

  // load resources

  Texture2D background_texture =
      LoadTexture("assets/background/background_1.png");
  Texture2D rock_tile_texture = LoadTexture("assets/tiles/rock_tile.png");
  Texture2D grass_tile_texture = LoadTexture("assets/tiles/grass_tile.png");
  // load resources

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    // background texture stretched to fullscreen
    DrawTexturePro(
        background_texture,
        (Rectangle){0, 0, (float)background_texture.width,
                    (float)-background_texture.height},
        (Rectangle){0, 0, (float)GetScreenWidth(), (float)GetScreenHeight()},
        (Vector2){0, 0}, 0.0f, WHITE);
    // background texture stretched to fullscreen

    // rock tiles
    // vertical loop

    for (int i = 0; i < (GetScreenWidth() / rock_tile_texture.width) + 1; i++) {
      DrawRockCol(rock_tile_texture, i);
    }
    // rock tiles

    // grass_tiles

    /* DrawTexture(grass_tile_texture, GetScreenWidth() / 2, GetScreenHeight() /
     * 2, */
    /*             WHITE); */

    DrawTexture(grass_tile_texture, 0,
                GetScreenHeight() -
                    ((GROUND_HEIGHT + 1) * grass_tile_texture.height),
                WHITE);
    // grass_tiles

    EndDrawing();
  }

  // Unload the texture and close the window
  UnloadTexture(background_texture);
  CloseWindow();

  return 0;
}
