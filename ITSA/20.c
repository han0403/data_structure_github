#include <stdio.h>

int main()
{
    int N, sum=0;            //1~N之間的總和
    scanf("%d", &N);
    for (int i=1;i<=N;i++)
    {
        sum=sum+i;
    }
    for (int i=1;i<=N-1;i++)
    {
        printf("%d + ", i);
    }
    printf("%d =", N);
    printf(" %d\n", sum);

    return 0;
}
