#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,c,m;
    scanf("%d%d%d",&x,&y,&m);
    c=(pow(x,y));
    printf("%d",c%m);
}