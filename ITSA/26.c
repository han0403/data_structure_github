#include <stdio.h>
#include <math.h>

int main()
{
    int M, N;              //1~M�����褤�A�Y��QN�㰣�h�[�i���פ�
    scanf("%d%d", &M, &N);
    int ans=0;
    for (int i=1;i<=M;i++)
    {
        if ((i*i)%N==0)
        {
            ans=ans+i*i;
        }
    }
    printf("%d\n", ans);

    return 0;
}
