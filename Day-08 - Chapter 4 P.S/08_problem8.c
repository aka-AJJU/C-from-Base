#include<stdio.h>

int main(){
    int product=1;
    int n = 1;
    for (int i = 1; i <= n; i++)
    {
        product *=i;
    }
     printf("The sum of first 10 natural numbers is %d", product);
    return 0;
}