#include<stdio.h>
int main()
{
    int i,j,r,s=0,n,c;
    scanf("%d%d",&r,&c);
    int a[10][10];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        s=0;
        for(j=0;j<c;j++)
        {
            s=s+a[i][j];
        }
        printf("%d ",s);
    }
     
}