#include<stdio.h>
int main()
{
    int n,s=0,i,a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%d",s);
}