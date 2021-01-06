#include <stdio.h>

int main()
{
    int array[6], ans=0;
    int i, j, k;
    for (i=0;i<6;i++)
    {
        scanf("%d", &array[i]);
    }
    for (i=0;i<6;i++)
    {
        ans=ans+array[i]*array[i]*array[i];
    }
    printf("%d\n", ans);

    return 0;
}
