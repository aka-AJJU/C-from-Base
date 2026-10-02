#include<stdio.h>

int main(){
    int i = 1;
    int product=1;
    int n = 5;
    while(i<=n);
    {
        product *=i;
        i++;
    }
     printf("The sum of first 10 natural numbers is %d", product);
    return 0;
}