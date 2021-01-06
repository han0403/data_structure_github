#include <stdio.h>

int main()
{
    int num[5], sum=0;                //撲克牌數字和，0~12黑桃(1~13)，13~25紅心(1~13)，26~38方塊(1~13)，39~51梅花(1~13)
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
