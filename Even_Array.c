#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    printf("True");
    else
    printf("False");
    return 0;
}