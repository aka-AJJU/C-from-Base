#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Harry";
    char s1[56] = "Harry";
    char s2[56] = " bhai";

    //printf("%d\n", strlen(st));
    char target[30];
    strcpy(target, st);
    //printf("%s %s", st, target);

    strcat(s1, s2);
    //printf("%s %s", s1, s2, target);
    
    int a = strcmp("deep", "joke"); //DJ is Negitive
    printf("%d", a);

    return 0;
}