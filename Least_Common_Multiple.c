#include<stdio.h>
int main()
{
   long int n1,n2,gcd,lcm,i;
    scanf("%ld%ld",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            gcd=i;
        }
    }
    printf("%ld",lcm=n1*n2/gcd);
}