#include <stdio.h>

int main()
{
    int array[3][3];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            scanf("%d", &array[j][i]);
        }
    }
    int ans=0;
    ans=(array[0][0]*array[1][1]*array[2][2])+(array[0][1]*array[1][2]*array[2][0])+(array[0][2]*array[1][0]*array[2][1])
        -(array[2][0]*array[1][1]*array[0][2])-(array[1][0]*array[0][1]*array[2][2])-(array[0][0]*array[2][1]*array[1][2]);
    printf("%d\n", ans);

    return 0;
}
