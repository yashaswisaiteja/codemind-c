#include<stdio.h>
#include<math.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    x==a+(2*b);
    if(x<=a*1+b*2)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}