#include <stdio.h>

int main()
{
    int n;
    double sum,deno,sign;
    printf("Please input n:\n");
    scanf("%d",&n);
    sum=1;
    deno=2;
    sign=1;
    printf("Output:\n");
    if(n<0)
    {
        printf("Input error!\n");
        return 1;
    }
    while(deno<=n)
    {
        sign *=-1;
        sum +=sign*(1/deno);
        deno++;
    }
    printf("the ans is %.5f\n",sum);
    return 0;
}
