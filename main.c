#include <stdio.h>
#include <stdlib.h>

#include "BMPFile.h"

int main(int argc, char const *argv[]) {
  printf("%s\n", "Hello YouTube!");
  createImage("test.bmp", 1920, 1280);
  createImage2("test2.bmp", 1920, 1280);
  return 0;
}
