#include<stdio.h>

int main(void){
    int num1, num2;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &num1, &num2);

    printf("Bitwise AND(&): %d\n", (num1 & num2));
    printf("Bitwise OR(|): %d\n", (num1 | num2));
    printf("Bitwise XOR(^): %d\n", (num1 ^ num2));
    printf("Bitwise NOT(~) for num1: %d\n", (~num1));
}