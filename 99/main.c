#include <stdio.h>
//给定一个正整数a，以及另外5个正整数，问题：这5个整数中，小于a的整数的和是多少？
int main()
{
    int a,n;
    int sum=0,i;
    printf("please input a:");
    scanf("%d",&a);
    for(i=0;i<5;i++)
    {
        scanf("%d",&n);
        if(n<a)
        {
            sum+=n;
        }

    }
    printf("Output:\n");
        printf("%d\n",sum);
    return 0;
}
