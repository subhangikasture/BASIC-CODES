#include <stdio.h>

int main()
{
    int a[100][100],w[100][100],i,j,c,n,p,q,wt;
    printf("Number of items");
    scanf("%d",&n);
    printf("Enter item \n ");
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d %d\n",a[i][0],a[i][1]);
    }

    for(i=0;i<n;i++)
    {
        w[i][0]=0;
        w[0][i]=0;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(a[i][0]>j)
            {
                w[i][j]=w[i-1][j];
            }
            else{
            wt=a[i][0];
            printf(" wt =%d\n",wt);
            p=w[i-1][j];
            q=w[i-1][j-wt]+a[i][1];
            if(p>q)
            {
                w[i][j]=p;
            }
            else
            {
                w[i][j]=q;
            }

        }
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=5;j++)
        {
            printf("%d\t",w[i][j]);
        }
        printf("\n");
    }

}
