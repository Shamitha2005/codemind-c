#include<stdio.h>
int main()
{
	char s[100];
	int i,c=0,t=0;
	scanf("%[^
]s",s);
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]==' ')
		{
		c++;
	}

	}
	printf("%d",c+1);
	
}