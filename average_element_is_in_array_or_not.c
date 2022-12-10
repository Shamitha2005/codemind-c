#include<stdio.h>
int main()
{
    int n,i,c=0,avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    float sum=0;
    for(i=0;i<n;i++)
    {
       sum=sum+a[i];
    avg=sum/n;
   
        }
    for(i=0;i<n;i++)
    {
         if(a[i]==avg)
    {
        c=1;
        break;
    }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
     printf("False");   
    }
}