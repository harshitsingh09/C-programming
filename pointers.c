/*
    1. Create a char type variable and initialize it to 100
    2. Print the address of the above variable
    3. Create a pointer variable and store the address of the above variable
    4. Perform read operation on the pointer variable to fetch 1 byte of data from the pointer
    5. Print the data obtained from the read operation on the pointer
    6. Perform the write operation on the pointer to store the value 65
    7. Print the value of the variable defined in step 1
*/
#include <stdio.h>

int main(){
    char data = 100;
    printf("Value of the variable is: %d\n", data);
    printf("The address of variable data is : %p\n", &data);
    char * ptr = &data;
    char value = *ptr;
    printf("Read value is: %d\n", value);
    *ptr = 65;
    printf("Value of the data is: %d\n", data);
    return 0;
}