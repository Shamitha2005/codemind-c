#include<stdio.h>
int main()
{
    int i,j,m,n,q,r,s,l;
    scanf("%d%d",&m,&n);
        for(i=m;i<=n;i++)
        {
            s=0;
            q=i;
            while(q!=0)
            {
                r=q%10;
                s=s*10+r;
                q=q/10;
            }
        if(s==i)
        {
            printf("%d ",i);
        
        }
    }
}