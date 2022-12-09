#include<stdio.h>
int main()
{
    int n,m,l;
    scanf("%d%d",&n,&m);
    l=(n>m)?m:n;
    while(1)
    {
        if(l%m==0 && l%n==0)
        {
            printf("%d",l);
            break;
        }
        l++;
    }
}