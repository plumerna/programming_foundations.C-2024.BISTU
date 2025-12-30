#include <stdio.h>

int main()
{
    int i,j,cnt,temp;
    int array[10000];
    printf("Please input numbers:");
    for(i=0;i<10000;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]==-222)
            break;
    }
    cnt=i;
    for(i=0;i<cnt;i++)
    {
        for(j=0;j<cnt-i-1;j++)
        {
            if(array[j]>array[j+1])
                {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
        }
    }
    printf("\nOutput:\n");
    for(i=0;i<cnt;i++)
    {
        if(i==cnt-1)
        {
            printf("%-6d\n",array[i]);
            break;
        }
        if((i+1)%6!=0)
            printf("%-6d,",array[i]);
        else if((i+1)%6==0)
        {
            printf("%-6d",array[i]);
            printf("\n");
        }
    }
    return 0;
}
