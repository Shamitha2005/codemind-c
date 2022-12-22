#include<stdio.h>
#include<math.h>
int main()
{
    int s=0,sq=0,n,i,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*i;
    }
    for(i=1;i<=n;i++)
    {
        sq=sq+i;
    }
    m=sq*sq;
   printf("%d",abs(m-s));
}