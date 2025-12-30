#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Please input n: ");
    scanf("%d",&n);
    printf("\noutput:\n");
    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
            printf("$\n");
            continue;
        }
        printf("$");
        for(j=1;j<=(n-i)-1;j++)
            printf(" ");
        printf("$");
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        printf("$");
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        printf("$");
        printf("\n");
    }
    return 0;
}
