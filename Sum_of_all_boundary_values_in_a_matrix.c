#include<stdio.h>
int main()
{
    int i,j,m,n,s=0;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
}