#include <stdio.h>

int main(){
    printf("Welcome to you Area Calculator!\n");
    printf("Choose a Calculator!\n");
    printf("Circle ---> c\nRight Triangle ---> t\nSquare ---> s\nRectangle ---> r\n");
    printf("Enter the character code of desired Shape calculator:\n");
    char input;
    scanf("%c", &input);
    float r, b, h;
    float area;
    
    switch (input){

    case 'c':
        printf("Circle Area Calculator\n");
        printf("Enter the radius of Circle:\n");
        scanf("%f", &r);
        if (r < 0){
            printf("Radius can not be negative!\n");
            area = -1;
        }
        else {
            area = 3.14 * r * r;
        }
        break;
    
    case 't':
        printf("Triangle Area Calculator\n");
        printf("Enter the height of Triangle:\n");
        scanf("%f", &h);
        printf("Enter the base of Triangle:\n");
        scanf("%f", &b);
        if ((h < 0) || (b < 0)){
            printf("Side can not be negative!\n");
            area = -1;
        }
        else {
            area = 0.5 * b * h;
        }
        break;

    case 's':
        printf("Square Area Calculator\n");
        printf("Enter the side of square:\n");
        scanf("%f", &h);
        if (h < 0){
            printf("Side can not be negative!\n");
            area = -1;
        }
        else {
            area = h * h;
        }
        break;

    case 'r':
        printf("Rectangle Area Calculator\n");
        printf("Enter the base of Rectangle:\n");
        scanf("%f", &b);
        printf("Enter the height of Rectangle:\n");
        scanf("%f", &h);
        if ((b < 0) || (h < 0)){
            printf("Side can not be negative!\n");
            area = -1;
        }
        else {
            area = b * h;
        }
        break;

    default:
        printf("Please enter valid Calculator code! Try again.");
        area = -1;
        break;
    }

    if (area < 0 );
    else{
        printf("Area = %f\n", area);
    }
    return 0;
}