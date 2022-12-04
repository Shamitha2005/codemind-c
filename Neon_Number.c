#include<stdio.h>
int main()
{
    int s=0,p=1,n,i,q;
    scanf("%d",&n);
    q=n*n;
    while(q>0)
    {
        p=q%10;
        s=s+p;
        q=q/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}