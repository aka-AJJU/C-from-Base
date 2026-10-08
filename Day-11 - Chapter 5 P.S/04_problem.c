#include<stdio.h>




int fibocci(int);

int fibocci(int n){
    if(n ==1 || n==2){
        return n-1;
    }
return fibocci(n-1) + fibocci(n-2);
}

int fibocacci(int);
int main(){
    int n=4;
    printf("The value of fibonacci series at %d is %d", n, fibocci(n));
    return 0;
}