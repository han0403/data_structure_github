#include <stdio.h>

int main()
{
    float up, down, height;
    scanf("%f%f%f", &up, &down, &height);
    printf("Trapezoid area:%.1f\n", (up+down)*height/2);

    return 0;
}
