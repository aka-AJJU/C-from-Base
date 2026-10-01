#include<stdio.h>

int main(){
    int age = 15;

    if(age>10){
        printf("You are inside if\n");
        printf("Your age is grater than 10\n");
    }
    if(age%5==0){
        printf("We are inside if\n");
        printf("Your age is divisibel by 5\n");
    }
    return 0;
}