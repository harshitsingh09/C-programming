#include <stdio.h>

int main(void){
    char c1, c2, c3, c4, c5, c6;
    printf("Enter any 6 chaaracters of your choice: ");
    scanf("%c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);
    printf("\nASCII codes: %u, %u, %u, %u, %u, %u", c1, c2, c3, c4, c5, c6);

    printf("\nPress any key to exit the application\n");
    while (getchar() != '\n')
    {
        // input buffer
    }
    getchar();
}