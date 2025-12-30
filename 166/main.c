#include <stdio.h>
//输出n行星号，每行5个星号

int main()
{
    int n,i;
    printf("please input n: ");
    scanf("%d",&n);
    printf("Output:\n");
    for(i=1;i<=n;i++)
    {
        printf("*****\n");
    }
    return 0;
}
