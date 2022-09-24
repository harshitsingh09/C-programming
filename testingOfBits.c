#include<stdio.h>

int main(void){
    // Write a program to test if user entered data is even or odd
    // For even numbers, the least significant bit is 0. For odd, 1
    // Using Bitmasking with 00000001 and perform AND operation.

    int num;
    printf("Enter your number:\n");
    scanf("%d", &num);
    if (num & 1){
        printf("Number %d is ODD!", num);
    }
    else{
        printf("Number %d is EVEN!", num);
    }
}