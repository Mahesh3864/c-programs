#include <stdio.h>

char* mystrstr(char *main, char *sub)
{
    char *a=main;
    char *b=sub;

    while(1) {
        if(!a)
            return NULL;
        if (!b)
            return main;

        else if(*a++ != *b++)
        {
            a=++main;
            b=sub;
        }
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

