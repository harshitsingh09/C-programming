#include <stdio.h>

int main()
{
    unsigned char distA2B = 160;
    unsigned char distB2C = 40;

    unsigned char distA2C;

    distA2C = distA2B + distB2C;

    printf("The total distance from A to C is %dkm", distA2C);
    /*
    Few format specifiers:
    %x for hexadecimal
    %c for character
    %u for unsigned integer
    %f for float
    */

    return 0;
}