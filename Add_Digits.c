#include<stdio.h>
int main()
{
    int s=0,n;
    scanf("%d",&n);
  while(n>9)
  {
      s=0;
      while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    n=s;
  }
    printf("%d",s);
}