#include <stdio.h>
int main()
{
    int n,i,j,al,bl,d[100][100];
    char a[1000],b[1000];
    scanf("%s%s",&a,&b);
    al=strlen(a);
    bl=strlen(b);

        for(j=0;j<bl+1;j++)
        {
            d[0][j]=0;
        }
        for(j=0;j<al+1;j++)
        {
            d[j][0]=0;
        }
        for(i=1;i<al+1;i++)
        {
            for(j=1;j<bl+1;j++)
            {
                if(a[i]==b[j])
                {
                    d[i][j]=d[i-1][j-1]+1;
                }
                else
                {
                    if(d[i-1][j]>d[i][j-1])
                    {
                        d[i][j]=d[i-1][j];
                    }
                    else
                    {
                        d[i][j]=d[i][j-1];
                    }
                }
            }
        }
        for(i=0;i<al+1;i++)
        {
            for(j=0;j<bl+1;j++)
            {
                printf("%d ",d[i][j]);
            }
            printf("\n");
        }

        printf("%d",d[al][bl]);




}
