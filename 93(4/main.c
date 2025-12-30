#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    int a[100][100];
    int Zsum=0,Fsum=0;
    printf("Please input n(1<=n<100): ");
    scanf("%d",&n);
    if(n<1||n>=100)
    {
        printf("Output:\nInput error!\n");
        return 0;
    }
    printf("Please input the number of a[n][n]:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if(i==j)
            Zsum=Zsum+a[i][j];
        if(j==(n-1-i))
            Fsum=Fsum+a[i][j];
        }
    }
    printf("Output:\n%d\n%d\n",Zsum,Fsum);
    return 0;
}
