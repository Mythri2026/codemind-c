#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float avg,sum=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
}