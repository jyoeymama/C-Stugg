//TO EVERYONE WHO READS THIS CODE, I KNOW ITS CRAPPY BUT THANKS FOR YOUR SUPPORT! I LOVE YOU GUYS!

#include <stdio.h>

int main() {
int choices[] = {1, 2, 3};
int choice;
char str[50];	
	
printf("Welcome to todo.c, A simple todo list in c!\n");
printf("Please choose and option below\n");
printf("1. Add someting todo\n");
printf("2. Remove something todo\n");
printf("3. exit\n");
//printf("Remember, after anwsering either 1, 2, or 3, type the same number twice!");

scanf("%d\n", &choice);
printf("You chose: %d\n", choice);

	if (choice == 1) {
 	scanf("%d\n", &str);
 	printf("%s\n", str);
	}

	if (choice == 2) {
	//later add logic for removing contents of the string str. Ive used str to store test inputed by the user which workks for now.
	}	

	if (choice ==3) {
 	printf("Exiting todo.c, Goodbye!\n");
	}
}
/*
 *
 * below i have a switch statement in C just as a refrence to myself when
 * i have to go back and change the code to a switch statement just because its .2 milliseconds faster lol
 *
	switch (choices) {
	case 1:
	//rest of code	
	break;

	case 2:
	//rest of code
	break;
	
	case 3:
	//rest of code
	break;
	return 0;
	}
*/
