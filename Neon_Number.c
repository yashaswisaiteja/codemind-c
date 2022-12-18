#include<stdio.h>
int main()
{
    int i,n,s=0,sq;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        i=sq%10;
        sq=sq/10;
        s=s+i;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}