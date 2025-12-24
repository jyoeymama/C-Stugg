#include <stdio.h>

int main() {

  int i = 9;
  int square = 0;

  // Basic while loop
  while (i >= 0) {
    printf("%d\t%d\n", i, i * i);
    i--;
  }
}