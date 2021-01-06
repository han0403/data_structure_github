#include <stdio.h>

int main()
{
    int num1, num2;                                   //計算兩整數間所有整數的總和
    scanf("%d%d", &num1, &num2);
    printf("%d\n", (num1+num2)*(abs(num1-num2)+1)/2);

    return 0;
}
