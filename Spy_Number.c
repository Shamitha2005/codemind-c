#include<stdio.h>
int main()
{
    int s=0,p=1,n,i,q;
    scanf("%d",&n);
    while(n>0)
    {
        q=n%10;
        s=s+q;
        p=p*q;
        n=n/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}