#include <stdio.h>
#include <math.h>

void T(int array[][3]);
int main()
{
    int i,j;
    int dat[3][3];
    printf("Please input 3*3 array:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&dat[i][j]);
    T(dat);
    printf("Output:\nThe transposed array is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",dat[i][j]);
        puts(" ");
    }
    return 0;
}

void T(int array[][3])
{
    int i,j,t;
    for(i=0;i<3;i++)
        for(j=0;j<i;j++)
    {
        t=array[i][j];
        array[i][j]=array[j][i];
        array[j][i]=t;
    }
}
