#include<stdio.h>

int getAge(){
    int x;
    printf("Enter your age: \n");
    scanf("%d", &x);
    return x;
}

int main(void){
    int age = getAge();
    (age < 18) ? printf("You are NOT eligible to vote\n") : printf("Congrats! You can Vote!\n");
    return 0;
}