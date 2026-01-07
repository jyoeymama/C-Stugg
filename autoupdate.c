//this is broken rn but I will fix it later

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Checking running CPU threads...\n");
    printf("Checking memory usage...\n");

    int x = 5;
    void *y = &x;
    for (size_t i = 0; i < sizeof x; i++) { 
    printf("%p\n", (void*)((char *)y + i));
    int status = system("sudo dnf update");
    if (status == -1) {
        perror("Failed to execute command");
	
	int x = 5;
	void *y = &x;
	for (size_t i = 0; i < sizeof x; i++) {
       printf("%p\n", (void*)((char *)y + i));
	int status = system("sudo dnf upgrade");
	if (status == -1) {
		perror("Failed to execute comand");
	}

       int x = 5;
        void *y = &x;
        for (size_t i = 0; i < sizeof x; i++) {
       printf("%p\n", (void*)((char *)y + i));
        int status = system("sudo dnf upgrade --refresh");
        if (status == -1) {
                perror("Failed to execute comand");
        return 0;
	};
	
