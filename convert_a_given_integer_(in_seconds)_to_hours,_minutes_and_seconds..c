#include<stdio.h>
int main()
{
    int h,m,s,i,a;
    scanf("%d",&i);
    h=i/3600;
    a=i%3600;
    m=a/60;
    s=a%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}