#include <stdio.h>
#define N 100
//从大到小的顺序输出n个整数中前m大的数

int main()
{
    int a[N];
    int i,j,t,p,m,r;
    printf("需要输入多少数字:\n");
    scanf("%d",&r);
    printf("请输入%d个数字:\n",r);
    for(i=0;i<r;i++)
        scanf("%d",&a[i]);
    printf("需要按从大到小输出前几位数字:\n");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        t=a[i];
        p=i;
        for(j=i+1;j<r;j++)
        {
            if(t<a[j])
            {
                t=a[j];
                p=j;
            }
        }
        t=a[i];
        a[i]=a[p];
        a[p]=t;
    }
    printf("Output:\n");
    for(i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
