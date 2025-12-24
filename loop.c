#include <stdio.h>

int main() {

  int learning = 1;
  int cont;

  while (learning++ < 10) {

    printf("Are you the sigma?\n");
    printf("1 - Yes\t2 - No\n");

    scanf("%d", &cont);

    if (cont == 1) {

      printf("YES YOU ARE!\n");
      break;

    } else {

      printf("cap\n");

    }

  }

}