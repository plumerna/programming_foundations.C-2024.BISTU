#include <stdio.h>
//每行包含一个字符和一个整数n(3<=n<=35)
//整数n表示等腰三角形的高。显然其底边长为2n-1

int main()
{
    int n,i,j;
    char c;
    printf("Please input char and n: ");
    c=getchar();
    scanf("%d",&n);
    printf("Output:\n");
    for(j=0;j<n-1;j++)
    {
        printf(" ");
    }
    printf("%c\n",c);
    for(i=0;i<n-2;i++)
    {
        for(j=0;j<n-2-i;j++)
        {
            printf(" ");
        }
        printf("%c",c);
        for(j=0;j<2*i+1;j++)
        {
            printf(" ");
        }
        printf("%c\n",c);
    }
    for(j=0;j<2*n-1;j++)
    {
        printf("%c",c);
    }
    printf("\n");
    return 0;
}
