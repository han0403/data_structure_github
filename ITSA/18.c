#include <stdio.h>

int main()
{
    int N, ans=0;                       //�p��1~N������Q2��3�㰣�A������Q12�㰣�����`�M
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
