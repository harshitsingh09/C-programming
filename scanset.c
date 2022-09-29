#include<stdio.h>

int main(){
    char name[30];

    printf("Enter you full name!\n");
    scanf("%[^\n]s", name);
    printf("Your name is : %s\n", name);

    return 0;
}