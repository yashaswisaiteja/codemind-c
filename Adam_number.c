#include<stdio.h>
int main()
{
    int a,b,n,r,r1,rev=0,rev1=0;
    scanf("%d",&n);
    a=n*n;
    while(n%10)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    b=rev*rev;
    while(b>0)
    {
        r1=b%10;
        rev1=rev1*10+r1;
        b=b/10;
    }
    if(a==rev1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}