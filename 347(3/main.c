#include <stdio.h>

int main()
{
    int n,x,y,z;
    printf("please input n:");
    scanf("%d",&n);
    printf("Output:\n");
    for(x=0;x<=100;x++)
        for(y=0;y<=100-x;y++)
        {
            z=100-x-y;
            if(x*5.0+y*3.0+z/3.0<=n*1.0)
                printf("x=%d,y=%d,z=%d\n",x,y,z);
        }
}
