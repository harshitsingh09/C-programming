#include <stdio.h>

void main(){
    unsigned char data = (unsigned char)(0x87 + 0xFF00);

    float result = (float)80 / 3; // Here '80' has been explicit converted as float and '3' has been implicit converted to float
    
    printf ("Data: %u result : %f\n", data, result);
}