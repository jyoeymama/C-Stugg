// Welcome to all.c! and file for me to pratice my knowledge of basic c!
// Something I really like about c is that you can include header files and easily call them in the main file. I think header files are great for seprating different parts of a program to make it more organized and easily fix bugs in one specific file.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int simplearray[] = {1, 2, 3 ,4 ,5};
    printf(simplearray);
    printf("Above is a simple array\n");

    // I actually like declaring int before you use it unlike java even though java is my favorite language
    int i;
        for (i = 0; i < 5; i++) {
    printf("%d\n", i);
    printf("Above is a simple for loop\n");
    }
    if (67 > 69) {
        printf("lol\n"); 
    } else {
        printf("lol anyways\n");
    }
    printf("Above is a basic if else statement\n");
    bool isJyomama28Cool = true;
    printf(isJyomama28Cool);
    printf("above is an example of a boolean\n");

    //And the last thing which i really suck at, pointers.

    int sigma = "69";
    printf("%p", &sigma);
    printf("That weird thing above is a memory address which is also an example of a basic pointer\n");

    //To all and anyone who actually looks through this
    printf("To anyone who actually looks through this program or code, this file in terms of code simply sucks. I am aware that most of my code is utter garbage. Before you throw your prejudice I want you to know that I am still learning! To anyone who may use this or anything else that I make, just know that I greatly appreciate you! I have a deep love for all of my fans! I may not have many fans or supporters but the people I do have I greatly appreciate it! Thank you to all my supporters!\n");
}
