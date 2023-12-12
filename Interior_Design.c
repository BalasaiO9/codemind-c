#include<stdio.h>
int main()
{
    int X1,Y1,X2,Y2,a,b;
    scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
    a=X1+Y1;
    b=X2+Y2;
    if(a<b)
    {
        printf("%d",a);
    }
    else if(a>b)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",a);
    }
}