#include <stdio.h>
#include <string.h>

int access() {
    char pass[50];
    printf("Enter Password: ");
    scanf("%s", pass); 

    if (strcmp(pass, "geu@2024") == 0) {
        return 1; 
    } else {
        return 0;  
    }
}
