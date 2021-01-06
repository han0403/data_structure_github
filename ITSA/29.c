#include <stdio.h>

int  main()
{
    int degree;                 //計算電費(累進制)
    scanf("%d", &degree);
    float summer, non_summer;
    if (degree<=120)
    {
        summer=degree*2.10;
        non_summer=degree*2.10;
    }
    if (degree>120 && degree<=330)
    {
        summer=120*2.10+(degree-120)*3.02;
        non_summer=120*2.10+(degree-120)*2.68;
    }
    if (degree>330 && degree<=500)
    {
        summer=120*2.10+210*3.02+(degree-330)*4.39;
        non_summer=120*2.10+210*2.68+(degree-330)*3.61;
    }
    if (degree>500 && degree<=700)
    {
        summer=120*2.10+210*3.02+170*4.39+(degree-500)*4.97;
        non_summer=120*2.10+210*2.68+170*3.61+(degree-500)*4.01;
    }
    if (degree>700)
    {
        summer=120*2.10+210*3.02+170*4.39+200*4.97+(degree-700)*5.63;
        non_summer=120*2.10+210*2.68+170*3.61+200*4.01+(degree-700)*4.50;
    }
    printf("Summer months:%.2f\nNon-Summer months:%.2f\n", summer, non_summer);

    return 0;
}
