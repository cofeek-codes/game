#!/bin/bash

set -xe
mkdir -p build
emcc -Wall -Wextra main.c -o build/index.html -I./lib/include -L./lib/lib -lraylib -lm -s USE_GLFW=3 -s ASYNCIFY


