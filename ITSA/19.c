#include <stdio.h>

int main()
{
    int num;                                                 //三位數的個十百位的三次方的和等於此三位數
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
