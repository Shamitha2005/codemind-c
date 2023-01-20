#include<stdio.h>
int main()
{
	char s[100];
	int i,c=0,t=0,m=0,n=0;
	scanf("%[^
]s",s);
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
		c++;
	    }
		else if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
    	{
			t++;
		}
		else if(s[i]==' ')
		{
		    m++;
		}
		else
		{
		    n++;
		}
	}
	printf("Vowels: %d
",c);
	printf("Consonants: %d
",n);
	printf("Digits: %d
",t);
	printf("White spaces: %d",m);
}