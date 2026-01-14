#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int simplearray[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("%d ", simplearray[i]);
    }
    printf("\nAbove is a simple array\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    printf("Above is a simple for loop\n");

    if (67 > 69) {
        printf("lol\n");
    } else {
        printf("lol anyways\n");
    }
    printf("Above is a basic if else statement\n");

    bool isJyomama28Cool = true;
    printf("%s\n", isJyomama28Cool ? "true" : "false");
    printf("Above is an example of a boolean\n");

    int sigma = 69;
    printf("%p\n", (void *)&sigma);
    printf("That weird thing above is a memory address (pointer example)\n");

    printf("To anyone who actually looks through this program or code...\n");

    return 0;
}
