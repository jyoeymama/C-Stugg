#include <stdio.h>

int main() {
    printf("Hello, please enter your name:\n");
    char name[20];
    scanf("%s", name);
    printf("Hello! %s\n", name); 
    return 0;
}
