#include<stdio.h>
int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    if(n==1||n==2)
    {
        printf("%d",n);
        flag=1;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n==i*i)
        {
            printf("True");
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("False");
}