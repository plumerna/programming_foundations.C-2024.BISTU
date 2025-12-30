#include <stdio.h>
//输入：n 输出翠英行数乘法表
//积左对齐，占3位

int main()
{
    int i,j,result,n;
    printf("Please input n: ");
    scanf("%d",&n);
    printf("Output:\n");
    if(n<=0||n>9)
    {
        printf("Input error!\n");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            result=i*j;
            printf("%d*%d=%-3d",i,j,result);
        }
        printf("\n");
    }
    return 0;
}
