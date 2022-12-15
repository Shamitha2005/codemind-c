#include<stdio.h>
    int cn(int k)
    {
        if(k<0)
        {
            return 0;
        }
        if(k==0)
        {
            return 1;
        }
        return cn(k-1)+cn(k-2)+cn(k-3);
}
int main ()
{
    int n,s;
    scanf("%d",&n);
    s=cn(n);
    printf("%d",s);
}