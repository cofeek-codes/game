#!/bin/bash

set -xe

mkdir -p build
cp -r -v --update src/assets/ build/
emcc -Wall -Wextra src/main.c -o build/index.html -I./lib/include -L./lib/lib -lraylib -lm -s USE_GLFW=3 -s ASYNCIFY --shell-file ./template/template.html --preload-file build/assets@assets

