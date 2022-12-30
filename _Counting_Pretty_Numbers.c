#include<stdio.h>
int main()
{
    int s,i;
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
        int l,r,c=0,j;
        scanf("%d%d",&l,&r);
        for(j=l;j<=r;j++)
        {
            if(j%10==2||j%10==3||j%10==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}