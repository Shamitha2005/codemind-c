#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,i,r,s=0,q;
    scanf("%d",&n);
     q=n;
      d=log10(n)+1;
    for(i=d;i>=1;i--)
    {
        r=n%10;
        s=s+pow(r,i);
        n=n/10;
    }
    if(s==q)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}