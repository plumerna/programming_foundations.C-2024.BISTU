#include <stdio.h>
//给定一个正整数a，以及另外的5个正整数，
//求这5个整数中，小于a的整数的和是多少？

int main()
{
    int a,n,i,sum;
    printf("Please input a:\n");
    scanf("%d",&a);
    sum=0;
    printf("Please input 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&n);
        if(n<a)
        {
            sum+=n;
        }
    }
    printf("Output:\n");
    printf("The sum is %d.\n",sum);
    return 0;
}
