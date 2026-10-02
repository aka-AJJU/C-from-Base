#include<stdio.h>

int main(){
    // Using do while loop:
    // int i = 1;
    // int sum = 0;
    // do{
    //     sum += i;
    //     i++;
    // }while(i<=10);
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    
    printf("The sum of first 10 natural numbers is %d", sum);
    return 0;
}