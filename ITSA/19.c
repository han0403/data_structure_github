#include <stdio.h>

int main()
{
    int num;                                                 //�T��ƪ��ӤQ�ʦ쪺�T���誺�M���󦹤T���
    scanf("%d", &num);
    int hundred, ten, one;
    hundred=num/100;
    ten=(num-(num/100)*100)/10;
    one=num-(num/100)*100-((num-(num/100)*100)/10)*10;
    if (hundred*hundred*hundred+ten*ten*ten+one*one*one==num)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
