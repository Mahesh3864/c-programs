#include <stdio.h>
#include <stdlib.h>

char* mystrstr(char *main, char *sub)
{
    char *a=main;
    char *b=sub;

    while(1) {
        if(!*a)
            return NULL;
        if (!*b)
            return main;

        if(*a++ == *b++)
            continue;
         a=++main;
         b=sub;
    }
}

int main()
{
    char m[10] = "mahesh";
    char s[10] = "he";
    char *result = mystrstr(m,s);
    printf("result = %s\n", result);
    return 0;
}

