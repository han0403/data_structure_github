#include <stdio.h>

int main()
{
    int num1, num2;                                   //�p����ƶ��Ҧ���ƪ��`�M
    scanf("%d%d", &num1, &num2);
    printf("%d\n", (num1+num2)*(abs(num1-num2)+1)/2);

    return 0;
}
