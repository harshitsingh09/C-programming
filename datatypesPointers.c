#include<stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main(){

    char *pAddress1;
    pAddress1 = (char*)&g_data; //typecasting for dissimilar datatypes
    printf("Value of address %p is: %x\n", pAddress1, *pAddress1);

    int *pAddress2;
    pAddress2 = (int*)&g_data;
    printf("Value at address %p is: %x\n", pAddress2, *pAddress2);

    return 0;
}