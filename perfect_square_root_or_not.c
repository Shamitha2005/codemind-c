#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int a;
    float s;
    scanf("%d",&n);
    s=sqrt(double(n));
    a=s;
    if(a==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}