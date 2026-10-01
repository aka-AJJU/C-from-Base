#include<stdio.h>

int main(){
    int income, tax=0;
    printf("Enter income: \n");
    scanf("%d", &income);
        if(income<250000){
            tax = 0;
        }
        if(income>250000 && income<500000){
            tax = 0.5 * (income - 250000);
        }
    return 0;
}