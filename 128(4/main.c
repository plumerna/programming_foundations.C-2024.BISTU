#include <stdio.h>
int fac(int n);
int main()
{
    int i,n;
    printf("Please input n:[1-15]\n");
    scanf("%d",&n);
    if((n>15)||(n<1))
        printf("Output:Error!\n");
    else
    {
        printf("Output:\n");
        for(i=1;i<=n;i++)
            printf("%d ",fac(i));
        puts("");
    }
    return 0;
}

int fac(int n)
{
    static int f=1;
    f=f*n;
    return f;
}
