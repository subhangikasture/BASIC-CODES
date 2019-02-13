#include <stdio.h>
int main()
{
    int a[]={-2,-3,4,-1,-2,1,5,-3},tmax=0,max=0,i,j;
    for(i=0;i<8;i++)
    {
        tmax=tmax+a[i];
        if(tmax<0)
        {
            tmax=0;
        }
        else if(max<tmax)
        {
            max=tmax;
        }
    }
    printf("%d",max);
}
