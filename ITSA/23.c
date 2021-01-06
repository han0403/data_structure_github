#include <stdio.h>

int main()
{
    float num;                       //人口密度，num=系館人數，全校人數=系館人數*全校面積/系館面積
    scanf("%f", &num);
    printf("%.2f\n", num*20000/198);

    return 0;
}
