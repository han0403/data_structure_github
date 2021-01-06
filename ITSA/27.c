#include <stdio.h>
#include <math.h>

int main()
{
    int envelope[10]={1100, 900, 800, 700, 600, 600, 500, 200, 100, 100};
    int n;                        //最多拿到多少壓歲錢
    scanf("%d", &n);
    int ans=0;
    for (int i=0;i<n;i++)
    {
        ans=ans+envelope[i];
    }
    printf("%d\n", ans);

    return 0;
}
