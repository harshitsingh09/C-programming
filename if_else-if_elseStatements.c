#include<stdio.h>

void waitForUserInput(void);
int main(void){
    int num1, num2;
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);
    if (num1 == num2){
        printf("Numbers are EQUAL!\n");
    }
    else{
        if (num1 > num2){
            printf("Num1 is GREATER!");
        }
        else{
            printf("Num2 is GREATER!");
        }
    }
    return 0;
}