#include <stdio.h>

int main()
{
    int i,j,n,s,sum;
    printf("Please input n:");
    scanf("%d",&n);
    if(n>10||n<1)
    {
        printf("Output:\n");
        printf("Input error!\n");
        return 0;
    }
    for(i=1,sum=0;i<=n;i++)
    {
        for(j=1,s=1;j<=i;j++)
        {
            s=s*j;
        }
        sum+=s;
    }
    printf("Output:\n");
    printf("%d\n",sum);
}
