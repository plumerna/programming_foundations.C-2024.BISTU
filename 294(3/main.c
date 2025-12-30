#include <stdio.h>
//任给一个自然数，若为偶数除以2，若为奇数则乘3再加1
//得到一个新的自然数都按照上面的法则继续演算，若干次后得到的结果必然为1

int main()
{
    int n,count=0;
    printf("Please enter number: ");
    scanf("%d",&n);
    printf("Output:\n");
    if(n<=0||n>200)
    {
        printf("Input error!\n");
        return 0;
    }
    do      //?
    {
        if(n%2)
        {
            n=n*3+1;
            printf("[%d]: %d*3+1=%d\n",++count,(n-1)/3,n);
        }
        else
        {
            n/=2;
            printf("[%d]: %d/2=%d\n",++count,2*n,n);
        }
    }
    while(n!=1);
    return 0;
}
