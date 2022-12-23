#include<stdio.h>
int main()
{
    int n,q,k=0;
    scanf("%d",&n);
    q=n;
    while(n>0)
    {
        n=n/10;
        k++;
        if(k==10&&n==0)
        {
            k--;
        }
       
    }
    if(k==9)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}