#include <stdio.h>

int main()
{
    int num[5], sum=0;                //���J�P�Ʀr�M�A0~12�®�(1~13)�A13~25����(1~13)�A26~38���(1~13)�A39~51����(1~13)
    for (int i=0;i<5;i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i=0;i<5;i++)
    {
        if (num[i]<13)
        {
            sum=sum+num[i]+1;
        }
        if (num[i]>=13 && num[i]<26)
        {
            sum=sum+num[i]-12;
        }
        if (num[i]>=26 && num[i]<39)
        {
            sum=sum+num[i]-25;
        }
        if (num[i]>=39)
        {
            sum=sum+num[i]-38;
        }
    }
    printf("%d\n", sum);

    return 0;
}
