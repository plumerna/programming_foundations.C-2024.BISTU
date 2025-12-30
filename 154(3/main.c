#include <stdio.h>
//输入n(n>0) 输出国际象棋棋盘

int main()
{
    int i,j,n;
    printf("Please input n :");
    scanf("%d",&n);
    printf("Output:\n");
    if(n<0)
    {
        printf("Input error!\n");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if((i+j)%2==0)
                printf("■");
            else
                printf("□");
            printf("\n");
    }
    return 0;
}
