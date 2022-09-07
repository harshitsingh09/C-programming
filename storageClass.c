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
    static int count = 0; // Static makes a variable global but the accessibility is only limited to myFunc()
    count += 1;
    printf("This function executed %d time(s)\n", count);
}