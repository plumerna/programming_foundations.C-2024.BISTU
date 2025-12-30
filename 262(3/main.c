#include <stdio.h>
#include <math.h>
//输入整数n，输出所有从1到该数之间的各位为1的素数，没有则输出-1
//看不懂，根本看不懂-2024.11.27

int main()
{
    int n,i,j,flag;
    printf("please input n:");
    scanf("%d",&n);
    printf("Output:\n");
    for(flag=0,i=2;i<n;i++)
    {
        for(j=2;j<=sqrt(i);j++)
            if(i%j==0)
                break;
        if(j>sqrt(i)&&i%10==1)
        {
            printf(flag?" %d":"%d",i);
            flag=1;
        }
    }
    if(!flag)
        printf("-1");
    puts(" ");
    return 0;
}
