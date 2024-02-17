#include <raylib.h>

#define SCREEN_WIDTH 1200
#define SCREEN_HEIGHT 900

#define BALL_SPEED 2.0f

int main() {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "my game");
  SetTargetFPS(60);

  // ball
  Vector2 ballPosition = {SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2};

  // ball

  while (!WindowShouldClose()) {

    if (IsKeyDown(KEY_W)) {
      ballPosition.y -= BALL_SPEED;
    }

    if (IsKeyDown(KEY_S)) {
      ballPosition.y += BALL_SPEED;
    }
    if (IsKeyDown(KEY_A)) {
      ballPosition.x -= BALL_SPEED;
    }
    if (IsKeyDown(KEY_D)) {
      ballPosition.x += BALL_SPEED;
    }

    BeginDrawing();

    ClearBackground(WHITE);

    // ball

    DrawCircle(ballPosition.x, ballPosition.y, 50, RED);

    // ball

    EndDrawing();
  }
}
