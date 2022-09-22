#include<stdio.h>

void waitForUserInput(void);

int main(void){
    int income, tax;
    double tempIncome;

    printf("Enter total income:\n");
    scanf("%lf", &tempIncome);

    income = (int)tempIncome;

    if (income < 0){
        printf("Income cannot be negative!!\n");
        return 0;
    }
    if (income <= 9525){
        tax = 0;
    }
    else if((income > 9525)&&(income <= 38700)){
        tax = income * 0.12;
    }
    else if ((income > 38700)&&(income <= 82500)){
        tax = income * 0.22;
    }
    else{
        tax = income * 0.32;
    }
    printf("Tax payable is $%d\n", tax);
}