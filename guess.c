//always include #include <stdio.h> at the top of every c program
#include <stdio.h>

/*
declare main function int main () {
 printf("Hello world\n!");
}
*/ 
int main() {

  int guess;
  int tries = 0;

  printf("I’m thinking of a number in the range 1-10.\n");
  printf("Try to guess it: ");
  scanf("%d", &guess);

// While loop in c
while (guess != 8 && tries < 50) {
  printf("Wrong guess, try again: ");
  scanf("%d", &guess);
  tries++;
}
//if statement in c
 if (guess == 8) {
    printf("You got it!\n");
  }
}