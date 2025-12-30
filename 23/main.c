#include <stdio.h>

/*根据输入的n(约定n>0)在屏幕上用@显示对应的X图案
根据输入的n(约定n>0)在屏幕上显示对应的图案
（图案最后一个@右侧是'\n'，不能有其他不可显示的字符；
图案最后一个@左侧除了@符号，其余都是空格符号）。
程序的运行效果应类似地如图1和图2所示，
图1中的3和图2中的5是从键盘输入的内容。
（可以直接从此复制@符号）*/
int main()
{
    int n,i,j;
    printf("Please input n: ");
    scanf("%d",&n);
    printf("Output:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        if(i==n)
        {
            printf("@\n");
            continue;
        }
        printf("@");
        for(j=1;j<=2*(n-i)-1;j++)
        {
            printf(" ");
        }
        printf("@");
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<n-i;j++)
        {
            printf(" ");
        }
        printf("@");
        for(j=1;j<=2*i-1;j++)
        {
            printf(" ");
        }
        printf("@");
        printf("\n");
    }
    return 0;
}
