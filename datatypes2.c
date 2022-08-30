#include <stdio.h>

int main()
{
    // Sizes of different data types
    printf("Size of char data type = %d\n", sizeof(char));
    printf("Size of int data type = %d\n", sizeof(int));
    printf("Size of float data type = %d\n", sizeof(float));
    printf("Size of short data type = %d\n", sizeof(short));
    printf("Size of long data type = %d\n", sizeof(long));
    printf("Size of long long data type = %d\n", sizeof(long long));

    long name = 97065;
    printf("Size of data type of variable 'name' = %d\n", sizeof(name));

    return 0;
}