#include <stdio.h>

int main()
{
    int n;                         //·~ÁZ±Æ¦W
    scanf("%d", &n);
    int cases[n], total=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d", &cases[i]);
        total=total+cases[i];
    }
    float average=total/n;
    int ans=0;
    for (int i=0;i<n;i++)
    {
        if (cases[i]>average)
            ans++;
    }
    printf("%d\n", ans);

    return 0;
}
