#include <stdio.h>

int intro(){
    printf("Display all records ---> 1\n");
    printf("Add new record --------> 2\n");
    printf("Delete your record ----> 3\n");
    printf("Press 'zero' to exit --> 0\n");
    int input = 0;
    printf("Enter your choice: ");
    scanf("%d", &input);
    if (input > 3 || input < 0){
        printf("Incorrect entry! Please enter value again\n");
    return input;
}

int main(){
    int iput = 0;
    iput = intro();
    return 0;
}