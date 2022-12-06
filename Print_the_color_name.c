#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int V,I,B,G,Y,O,R;
    if(ch=='V')
    {
        printf("Violet");
    }
    else if(ch=='I')
    {
        printf("Indigo");
    }
    else if(ch=='B')
    {
        printf("Blue");
    }
    else if(ch=='G')
    {
        printf("Green");
    }
    else if(ch=='Y')
    {
        printf("Yellow");
    }
    else if(ch=='O')
    {
        printf("Orange");
    }
    else if(ch=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}