#include <stdio.h>
//输入一个高度h，输出一个 高为h，上底为h的用“*”表示的梯形图形。
int main()
{
    int h,i,j,k;
    printf("please input h:");
    scanf("%d",&h);
    printf("Output:\n");
    for(k=h,i=0;i<h;i++)
    {
        for(j=0;j<3*h-2-k;j++)
            printf(" ");
        for(j=0;j<k;j++)
            printf("*");
        printf("\n");
        k+=2;
    }
    return 0;
}
