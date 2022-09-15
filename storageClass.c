#include <stdio.h>

void myFunc(void);

int main(){
    myFunc();
    myFunc();
    myFunc();
    myFunc();

    return 0;
}

void myFunc(void){
    static int count = 0; // Static storage class specifier makes a variable global but the accessibility is only limited to myFunc()
    // 'extern' storage class specifier allows us to use variables declared globally in another file
    count += 1;
    printf("This function executed %d time(s)\n", count);
}