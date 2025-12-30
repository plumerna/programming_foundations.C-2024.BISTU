#include <stdio.h>
int large(int x,int y);

int main()
{
    int a[10],b[10],i,n=0,m=0,k=0;
    printf("Input:\n");
    printf("please input array a:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("please input array b:\n");
    for(i=0;i<10;i++)
        scanf("%d",&b[i]);
    for(i=0;i<10;i++)
    {
        if(large(a[i],b[i])==1)
            n++;
        else if(large(a[i],b[i])==0)
            m++;
        else
            k++;
    }
    printf("Output:\n%d %d %d\n",n,m,k);
    if(n>k)
        puts("a>b");
    else if(n<k)
        puts("a<b");
    else
        puts("a=b");
    return 0;
}

int large(int x,int y)
{
    int flag;
    if(x>y)
        flag=1;
    else if(x<y)
        flag=-1;
    else
        flag=0;
    return flag;
}
