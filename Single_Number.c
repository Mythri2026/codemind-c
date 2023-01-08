#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n],ctr=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        ctr=0;
        for(j=1,k=n;j<=k;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    ctr++;
                }
            }
        }
        if(ctr==0)
        {
            printf("%d",a[i]);
        }
    }
}