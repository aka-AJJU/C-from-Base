#include<stdio.h>

// Function prototype
int sum(int, int);


//Function Defination
int sum(int x, int y){
 printf("The sum is %d\n", x+y);
}
int main(){
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sum is %d\n", c);
    sum(a,b);

    int a1 = 12;
    int b1 = 23;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    sum(a1,b1);


     int a2 = 2;
    int b2 = 27;



    sum(a2,b2);
    return 0;
}