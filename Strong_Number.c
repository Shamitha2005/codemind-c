#include<stdio.h>
int main()
{
    int n,q,b,i=1,r=0,s=0;
    scanf("%d",&n);
    q=n;
    while(n)
    {
        b=1;i=1;
        r=n%10;
        while(i<=r)
        {
            b=b*i;
            i++;
        }
        s=s+b;
        n=n/10;
    }
    if(s==q)
    {
        printf("The number %d is a strong number",q);
    }
    else
   {
       printf("The number %d is not a strong number",q);
   }
}