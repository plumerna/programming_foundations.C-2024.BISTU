#include <stdio.h>
//输入一个正整数n，再输入n个不同的整数
//调换数组中最大和最小的两个数，然后输出

int main()
{
    int n,a[20],i,max,min,maxp,minp;
    printf("please input n:");
    scanf("%d",&n);
    if(n<1||n>20)
        printf("Output:\ninput error!\n");
    else
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        max=min=a[0];
        maxp=minp=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                maxp=i;
            }
            if(a[i]<min)
            {
                min=a[i];
                minp=i;
            }
        }
        a[maxp]=min;
        a[minp]=max;
        printf("Output:\n");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}
