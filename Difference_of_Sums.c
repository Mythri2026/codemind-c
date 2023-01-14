#include<stdio.h>
int main()
{
    int n,i,m=0,a=0,b,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=i*i;
        m=m+t;
        a=a+i;
        b=a*a;
    }
    printf("%d",b-m);
}