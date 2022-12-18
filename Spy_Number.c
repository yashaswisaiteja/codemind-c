#include<stdio.h>
int main()
{
    int n,d,s=0,pro=1;
    scanf("%d",&n);
    for(;n>0;)
    {
        d=n%10;
        s=s+d;
        pro=pro*d;
        n=n/10;
    }
    if(s==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}