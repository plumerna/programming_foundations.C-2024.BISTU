#include <stdio.h>
//给定一个不多于5位的正整数
//1.求出它是几位数
//2.分别输出每一位数字，且每一位数字之后输出一个空格
//3.按逆序输出各位数字，且每一位数字之后输出一个空格

int main()
{
    int v,i,digit;
    int d[10];
    printf("Input a data: ");
    scanf("%d",&v);
    printf("Output:\n");
    digit=0;
    while(v>0)
    {
        digit++;
        d[digit]=v%10;
        v/=10;
    }
    printf("%d\n",digit);
    for(i=1;i<=digit;i++)
        printf("%d ",d[digit+1-i]);
    printf("\n");
    for(i=1;i<=digit;i++)
        printf("%d ",d[i]);
    printf("\n");
    return 0;
}
