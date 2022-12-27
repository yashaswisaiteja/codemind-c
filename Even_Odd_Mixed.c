#include<stdio.h>
int main()
{
    int r,n,E=0,O=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        O++;
        else
        E++;
        n=n/10;
    }
    if(O>0 && E==0)
    {
        printf("Even");
    }
    else if(O==0 && E>0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}