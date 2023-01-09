#include<stdio.h>
int main()
{
    int i,n,a[10],b[10],c=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        c=c+b[i];
    }
    if(s>c)
    {
        printf("0");
    }
    else
    printf("%d",c-s);
}