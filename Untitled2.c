#include<stdio.h>
int main()
{
	int mn,mx,i,n;
	scanf("%d%d",&mn,&mx);
	for(i=mn;i<=mx;i++)
	{
		n=i*i+1;
		if(n%2==0)
		{
			printf("%d ",n);
		}
	}
}
