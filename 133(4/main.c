#include <stdio.h>
#define N 10

int main()
{
    int i,j,a[N][N],n;
    printf("Please input n: ");
    scanf("%d",&n);
    printf("Output:\n");
    if(n>10||n<=0)
    {
        printf("Input error!\n");
        return 0;
    }
    for(i=0;i<=n-1;i++)
    {
        a[i][i]=1;
        a[i][0]=1;
    }
    for(i=2;i<=n-1;i++)
        for(j=1;j<=i-1;j++)
        a[i][j]=a[i-1][j]+a[i-1][j-1];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=i;j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    return 0;
}
