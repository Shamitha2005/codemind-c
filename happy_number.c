#include<stdio.h>
int main()
{
    int q,r,s,i,n;
    scanf("%d",&n);
    q=n;
    for(i=0;i<9;i++)
    {
        s=0;
    while(q>0)
    {
        r=q%10;
        q=q/10;
        s=s+r*r;
    }
    q=s;
    }
    if(s==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}