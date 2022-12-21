#include<stdio.h>
int main()
{
    int e=0,o=0,n,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        
        if(r%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        n=n/10;
    }
    if(e==n)
    {
        printf("Odd");
    }
   else if(o==n)
    {
        printf("Even");
    }
    else
    {
        printf("Mixed");
    }
}