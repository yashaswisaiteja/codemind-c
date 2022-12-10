#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    float c;
    if(n<200)
    {
        c=1.20;
    }
    else if(n>=200 && n<400)
    {
        c=1.50;
    }
    else if(n>=400 && n<600)
    {
        c=1.80;
    }
    else
    {
        c=2.00;
    }
    float b,sc,amt;
    b=n*c;
    if(b>400)
    {
        sc=b*0.15;
    }
    else
    {
        sc=100;
    }
    amt=sc+b;
    printf("%0.2f",amt);
}