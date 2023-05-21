#include<stdio.h>
int main()
{
    int n,i,sq,s=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        i=sq%10;
        s=s+i;
        sq=sq/10;
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