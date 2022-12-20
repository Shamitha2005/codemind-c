#include<stdio.h>
int main()
{
    int t,n,sqr,count=1;
    scanf("%d",&n);
    sqr=n*n;
    t=n;
    while(n!=0)
    {
        count=count*10;
        n=n/10;
    }
    if(sqr%count==t)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}