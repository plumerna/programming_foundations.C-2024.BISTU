#include <stdio.h>
//递归输出第n个人的年龄
//除去第一个人，所有人都比编号小1的人大k岁，第一个人说自己a岁
int age(int num);
int n,k,a;
int main()
{
    printf("Please input n k a:\n");
    scanf("%d%d%d",&n,&k,&a);
    printf("Output:\n");
    printf("The age is: %d.\n",age(n));
    return 0;
}

int age(int num)
{
    if(num==1)
        return a;
    else
        return (k+age(num-1));
}
