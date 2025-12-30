#include <stdio.h>

int main()
{
    int n,i;
    double result=0.0,s=1.0;
    printf("Input:\n");
    printf("Please input n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
        result+=1/s;
    }
    printf("Output:\n");
    printf("S=1/1!+1/2!+...+1/%d!=%.16f\n",n,result);
    return 0;
}
