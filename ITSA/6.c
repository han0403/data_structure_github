#include <stdio.h>

int main()
{
    int num1, num2;
    while(scanf("%d", &num1)==1 && scanf("%d", &num2)==1)
    {
        printf("%d\n", num1+num2);
    }

    return 0;
}
