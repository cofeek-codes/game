Please, before submitting a new issue verify and check:

 - [x] I tested it on latest raylib version from master branch
 - [x] I checked there is no similar issue already reported
 - [x] I checked the documentation on the [wiki](https://github.com/raysan5/raylib/wiki)
 - [x] My code has no errors or misuse of raylib

### Issue description
Getting `WARNING: FILEIO: Failed to open file index.js:1503:16
`
when loading texture
### Environment
[platform info](https://github.com/cofeek-codes/survivalist-web/blob/main/issue/platform.png)
### Issue Screenshot
[issue screenshot](https://github.com/cofeek-codes/survivalist-web/blob/main/issue/issue.png)
### Code Example

```c
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
```

# Buld Script

```sh
#!/bin/bash

set -xe

mkdir -p build
cp -r -v --update src/assets/ build/
emcc -Wall -Wextra src/main.c -o build/index.html -I./lib/include -L./lib/lib -lraylib -lm -s USE_GLFW=3 -s ASYNCIFY --shell-file ./template/template.html 
```

# File Structure 

```
./
├── build.sh
├── issue
│   ├── issue.md
│   ├── issue.png
│   └── platform.png
├── lib
│   ├── include
│   │   ├── raylib.h
│   │   ├── raymath.h
│   │   └── rlgl.h
│   └── lib
│       └── libraylib.a
├── src
│   ├── assets
│   │   └── background
│   │       └── background_1.png
│   └── main.c
└── template
    └── template.html

Directories: 8, Files: 11, Symbolic Links: 0, Lines: 0

```
