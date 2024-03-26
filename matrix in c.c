#include <stdio.h>
#include <math.h>

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    
    int ar[m][n];   
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[m][n]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",ar[m][n]);
        }
    }
    
    return 0;
}