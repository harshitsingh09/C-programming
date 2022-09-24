#include <stdio.h>

int main(void){
    // Write a program to set 4th and 7th bit position to 1 of a given number and print the result
    // AND is used for TEST, OR is used for SET
    
    int num;
    printf("Enter your number:\n");
    scanf("%d", &num);
    
    printf("The output after setting 4th and 7th bit of %d is = %d", num, (num | 10010000));
}