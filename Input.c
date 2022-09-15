#include <stdio.h>

int main(){
    float num1, num2, num3, avg;

    printf("Enter first number:\n");
    fflush(stdout);
    scanf("%f", &num1);
    printf("Enter second number:\n");
    fflush(stdout);
    scanf("%f", &num2);
    printf("Enter third number:\n");
    fflush(stdout);
    scanf("%f", &num3);

    avg = (num1 + num2 + num3) / 3;
    printf("The average of the three numbers is: %f", avg);

    return 0;
}