#include <stdio.h>

int main()
{
    int gender;        //標準體重
    float height, ans;
    while(scanf("%f", &height)==1 && scanf("%d", &gender)==1)
    {
        if (gender==1)
        {
            ans=(height-80)*0.7;
            printf("%.1f\n", ans);
        }
        if (gender==2)
        {
            ans=(height-70)*0.6;
            printf("%.1f\n", ans);
        }
    }

    return 0;
}
