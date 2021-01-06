#include <stdio.h>

int main()
{
    int num=2;
    int i;
    scanf("%d", &i);
    if (i<=31)
    {
        for (int j=0;j<i-1;j++)
        {
            num=num*2;
        }
        printf("%d\n", num);
    }
    else
    {
        printf("Value of more than 31\n");
    }

    return 0;
}
