#include<stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    for(i=1,t=(64+i);i<=n;i++,t++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",t);
        }
        printf("
");
    }
}