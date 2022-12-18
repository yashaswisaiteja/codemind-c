#include<stdio.h>
int main()
{
    int n,m,i,n2,n3,s=0;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}