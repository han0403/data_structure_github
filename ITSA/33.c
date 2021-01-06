#include <stdio.h>

int main()
{
    int score, rebound, assist, steal, turnover;                    //­pºâMVP­È
    scanf("%d%d%d%d%d", &score, &rebound, &assist, &steal, &turnover);
    int MVP=(score*1+assist*2+rebound*2+steal*2)-(turnover*2);
    if (MVP>=45)
    {
        printf("A\n");
    }
    if (MVP>=35 && MVP<45)
    {
        printf("B\n");
    }
    if (MVP>=25 && MVP<35)
    {
        printf("C\n");
    }
    if (MVP<25)
    {
        printf("D\n");
    }

    return 0;
}
