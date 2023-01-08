#include<stdio.h>
int main()
{
    int U;
    scanf("%d",&U);
    float c,b,s,t;
    if(U<=199)
    {
        c=1.20;
        b=U*c;
        printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
",U,c,b);
    }
    else if(U>=200 && U<400)
    {
        c=1.40;
        b=U*c;
        printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
",U,c,b);
    }
    else if(U>=400 && U<600)
    {
        c=1.60;
        b=U*c;
        printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
",U,c,b);
    }
    else if(U>=600 && U<800)
    {
        c=1.80;
        b=U*c;
        printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
",U,c,b);
    }
    else
    {
        c=2.00;
        b=U*c;
        printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
",U,c,b);
    }
    if(b>400)
    {
        s=(b*15)/100;
        t=s+b;
        printf("Surcharge: %0.2f
Total Amount: %0.2f",s,t);
    }
    else
    {
        s=0.00;
        t=s+b;
        printf("Surcharge: %0.2f
Total Amount: %0.2f",s,t);
    }
}