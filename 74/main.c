#include <stdio.h>
//输入两个正整数m和n，（n>0,m>0）求其最大公约数和最小公倍数。

int main()
{
    int a,b,n1,n2,t;
    printf("Please input two numbers:\n");
    scanf("%d,%d",&n1,&n2);
    printf("Output:\n");
    if(n1<=0||n2<=0)
    {
        printf("Input error!\n");
        return 0;
    }
    if(n1<n2)
    {
        t=n1;
        n1=n2;
        n2=t;
    }
    a=n1;
    b=n2;
    while(b!=0)
    {
        t=a%b;
        a=b;
        b=t;
    }
    printf("最大公约数为:%d\n",a);
    printf("最小公倍数为:%d\n",n1*n2/a);
    return 0;
}
