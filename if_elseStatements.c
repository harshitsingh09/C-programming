#include<stdio.h>

int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age >= 18){
        printf("You are eligible to Vote!\n");
    }
    else{
        printf("You are NOT eligible to vote.");
    }
}