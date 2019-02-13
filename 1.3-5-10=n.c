#include <stdio.h>

int main()
{
    int n=15,i,j,a[100];
    memset(a,0,sizeof(int)*(n+1));
    a[0]=1;
    for(i=3;i<=n;i++)
    {
        a[i]=a[i]+a[i-3];
    }
    for(i=5;i<=n;i++)
    {
        a[i]=a[i]+a[i-5];
    }
    for(i=10;i<=n;i++)
    {
        a[i]=a[i]+a[i-10];
    }
        printf("%d",a[n]);

}
