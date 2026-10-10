#include<stdio.h>


int* sum(int a, int b){
    int c = a+b;
    printf("The sum %d\n", c);
    return &s;
}

float* avarage(int a, int b){
    float avg = (a+b)/2.0;
    printf("The avarage is %d\n", avg);
    return &avg;
}

int main(){
    int x = 4;
    int y= 6;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x,y);
    ptr2 = avarage(x,y);

printf("The address of sum is %u and of avarage is %u", ptr1, ptr2);

    return 0;
}