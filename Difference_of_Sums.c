#include<stdio.h>
int main()
{
    int n,i,diff,s=0,q=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s=s+i;
        q=q+i*i;
    }
    diff=(s*s)-q;
    printf("%d",diff);
}