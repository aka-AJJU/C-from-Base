#include <stdio.h>
typedef struct emp{
    int salary;
    float score;
}   Employee;

int main(){
    Employee e1;
    Employee* ptr1;
    (*ptr1).salary = 56;
    ptr1->salary = 56;
    return 0;
}