/* Pseudo code
 *
 * possibleSubsets(A, N):
 *   for i = 0 to 2^N:
 *       for j = 0 to N:
 *           if jth bit is set in i:
 *               print A[j]
 *       print ‘\n’
 *
 */
 


#include <stdio.h>
#include <string.h>

void string_combination(char a[], int n)
{
    int i,j;
    for(i=0; i<(1<<n) ; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i & (1 << j))
                printf("%c", a[j]);
        }
        printf("\n");
    }
    return;
}

int main()
{
    char a[10]={0};
    int length = 0;
    printf("Enter the string\n");
    scanf("%s", a);

    length = strlen(a);

    string_combination(a, length);
    return 0;
}

