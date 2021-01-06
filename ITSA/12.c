#include <stdio.h>

int main()
{
    int price;
    scanf("%d", &price);
    printf("NT10=%d\n", price/10);
    printf("NT5=%d\n", (price-10*(price/10))/5);
    printf("NT1=%d\n", price-10*(price/10)-5*((price-10*(price/10))/5));

    return 0;
}
