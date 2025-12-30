#include <stdio.h>

int main()
{
    int a,b,c;
    printf("please input data: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Output:\n");
    printf("%4d+%4d=%4d",a,b,c);
    return 0;
}
