#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "a");
    int num = 432;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    
    return 0;
}