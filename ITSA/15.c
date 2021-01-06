#include <stdio.h>

int main()
{
    int N, ans=0;
    scanf("%d", &N);
    for (int i=1;i<=N;i++)
    {
        if (i%3==0)
        {
            ans=ans+i;
        }
    }
    printf("%d\n", ans);

    return 0;
}
