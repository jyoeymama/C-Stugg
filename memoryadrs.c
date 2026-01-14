#include<stdio.h>
#include<string.h>

#include <stdio.h>

int main() {
    int sigma = 69;
    printf("Memory address of sigma: %p\n", (void*)&sigma);  // Casting to (void*) to avoid warnings
    printf("That weird thing above is a memory address, which is also an example of a basic pointer.\n");
    return 0;
}
