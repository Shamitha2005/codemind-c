#include<stdio.h>
int main()
{
    int p=1,s=0,n;
    scanf("%d",&n);
    while(n>0)
    {
        s+=n%10;
        p*=n%10;
        n/=10;
    }
    printf("%d",p-s);
}