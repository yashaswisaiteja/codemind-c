#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    float avg;
    avg=float(sum)/n;
    printf("%0.2f",avg);
}