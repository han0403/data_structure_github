#include <stdio.h>

int main()
{
    double hour, pay;
    scanf("%lf%lf", &hour, &pay);
    if (hour<61)
    {
        printf("%.1f\n", hour*pay);
    }
    if (hour>60 && hour<121)
    {
        printf("%.1f\n", 60*pay+(hour-60)*pay*1.33);
    }
    if (hour>120)
    {
        printf("%.1f\n", 60*pay+60*pay*1.33+(hour-120)*pay*1.66);
    }

    return 0;
}
