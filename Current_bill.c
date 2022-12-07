#include<stdio.h>
int main()
{
    float a,b,s,t;
    scanf("%f",&a);
    if (a<=199)
    {
        b=a*1.20;
    }
    else if ((a>=200)&&(a<400))
    {
        b=a*1.50;
    }
    else if ((a>=400) && (a<600))
    {
        b=(a*1.80);
    }
    else
    {
        b=(a*2.00);
    }
    if(b>=400)
    {
        s=b*0.15;
    }
    else
    {
        s=100;
    }
    t=b+s;
    printf("%.2f",t);
}