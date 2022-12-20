#include<stdio.h>
int main()
{
    long int i,r,sum=0,q,n;
    scanf("%ld",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        sum=r+sum*10;
        q=q/10;
    }
    printf("%ld",sum);
}