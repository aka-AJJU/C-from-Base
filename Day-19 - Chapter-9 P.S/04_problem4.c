#include <stdio.h>


typedef struct c{
    int real;
    int imaginary;
} Complex;

int main(){
    Complex c = {1, 2};
    printf("The value of Complex is %d + i%d ", c.real, c.imaginary);
    return 0;
}