#include<stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main(){

    short *pAddress = (short*)&g_data;
    printf("Value of pAddress: %p\n", pAddress);
    printf("Value of address %p is: %x\n", pAddress, *pAddress);
    pAddress = pAddress + 1;

    printf("Value of pAddress: %p\n", pAddress);
    printf("Value of address %p is: %x\n", pAddress, *pAddress);

    // Here different or consective bits of data are being displayed as we change the memory address value
    return 0;
}