#include <stdio.h>

int main()
{
    int N, ans=0;                       //計算1~N之間能被2跟3整除，但不能被12整除的數總和
    scanf("%d", &N);
    for (int i=1;i<=N;i++)
    {
        if (i%2==0 && i%3==0 && i%12!=0)
        {
            ans=ans+i;
        }
    }
    printf("%d\n", ans);

    return 0;
}
