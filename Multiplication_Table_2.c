#include<stdio.h>
int main()
{
    int i,n1,n2;
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n2;i++)
    {
        printf("%d x %d = %d
",n1,i,n1*i);
    }
}