#include <stdio.h>

int main()
{
    int a, b, c;          //a��b����
    scanf("%d%d", &a, &b);
    c=a;
    for (int i=1;i<b;i++)
    {
        c=c*a;
    }
    printf("%d\n", c);

    return 0;
}
