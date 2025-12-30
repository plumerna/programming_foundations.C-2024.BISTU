#include <stdio.h>

int main()
{
    int a;
    printf("Input:\n");
    scanf("%d",&a);
    a+=a-=a*=a;
    printf("Output:\n%d",a);
    return 0;
}
