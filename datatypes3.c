#include <stdio.h>

int highscore = 1200; // Global variable with score throughout the program in running file
void myFunc(void); // This is a function prototype

int main()
{
    int score;
    score = 900; // Local variable with scope limited to main() func.
    printf("Value of score = %d\n", score);
    printf("Value of highscore = %d\n", highscore);
    myFunc(); // This is a function call
    return 0;
}

void myFunc() // This is a function definition
{
    highscore = 100; // Locally assigned values are given priority over Globally assigned value
    {
        highscore = 50; //The scope of this is bound by curly braces, hence it can not change the highscore value
    }
    printf("Value of score = %d\n", highscore);

}