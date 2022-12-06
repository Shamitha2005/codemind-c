#include<stdio.h>
int main()
{
    float  bs,hra,da,pf,gs;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    gs=pf+bs+hra+da;
    printf("%.2f
%.2f",pf,gs);
}