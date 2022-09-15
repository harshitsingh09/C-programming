#include <stdio.h>

int main(){
    float num1 = 100.0123456789123;
    float num2 = 0.0123456789;
    double num3 = 100.0123456789123;
    printf("Float Number ONE:\n %f\n", num1);
    printf("Float Number TWO:\n %f\n", num2);
    printf("Float Number ONE upto 9 decimals:\n %0.9f\n", num1); // Float loses precision after 5 digits in decimal
    printf("Float Number TWO upto 9 decimals:\n %0.9f\n", num2); // However, Float hasn't lost precision here in decimal
    printf("Float Number in SCIENTIFIC NOTATION:\n %0.2e\n", num1); // notice format specifier, %e
    printf("Double type Number ONE upto 9 decimals:\n %0.9lf\n", num3); // notice format specifier %lf (long float?) for Double. Here there is precision for variable unlike Float 3 lines above

    return 0;
}