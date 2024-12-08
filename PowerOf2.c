#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int x)
{
    if(x == 0)
        return false;
    else
    {
        while(x % 2 == 0) x /= 2;
        return (x == 1);
    }
}

int main()
{
    int num = 0;
    bool result=false;
    printf("Enter the number\n");
    scanf("%d", &num);
    result = isPowerOfTwo(num);

    printf("Result = %d\n", result);

    return 0;
}



