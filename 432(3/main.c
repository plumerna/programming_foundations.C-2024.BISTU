#include <stdio.h>

int main()
{
    float sn=100.0,n_high=sn/2;
    int i,n;
    printf("Please input n: ");
    scanf("%d",&n);
    printf("\nOutput:\n");
    if(n<=0)
    {
        printf("Input error!\n");
        return 0;
    }
    for(i=2;i<=n;i++)
    {
        sn=sn+2*n_high;
        n_high=n_high/2;
    }
    printf("总共弹起的高度为(米):%.3f.\n",sn);
    printf("第%d次弹起的高度为:%.3f.\n",n,n_high);
    return 0;
}
