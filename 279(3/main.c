#include <stdio.h>
//输入1~9一个数，根据输入的数打印
//下三角乘法口诀表
//要求积的输出占3个宽度，且左对齐

int main()
{
    int n,i,j;
    printf("input a number(1~9):");
    scanf("%d",&n);
    printf("Output:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d*%d=%-3d",i,j,i*j);//积的输出后方加3个宽度。约等于左对齐
        printf("\n");
    }
    return 0;
}
