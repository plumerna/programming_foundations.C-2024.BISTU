#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Input x:");
    scanf("%d",&x);
    if(x<0)
        y=-1;
    if(x==0)
        y=0;
    if(x>0)
        y=1;
    printf("Output:\ny=%d",y);
    return 0;
}
