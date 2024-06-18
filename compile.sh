#!/bin/sh
if [ ! -d out/ ]; then
  mkdir -p out/;
fi
gcc core/*.c -o out/sand.o
