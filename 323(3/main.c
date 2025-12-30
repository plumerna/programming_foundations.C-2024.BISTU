#include <stdio.h>
//人员分组问题
//输入第一行为测试数据组数n
//接下来n行，每行一个整数表示此人积分
//根据积分输出该人被分到的组号

int main()
{
    int i,num;
    int a[100];
    printf("Input: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
    printf("\nOutput:\n");
    for(i=0;i<num;i++)
    {
        if(a[i]<=10)    //积分小于等于10，分到1组
            printf("Group Number: 1\n");
        else if(a[i]<=100)  //按个位数四舍五入原则近似到10整数倍
            printf("Group Number: %d\n",(a[i]+5)/10*10);
        else if(a[i]<=1000) //按十位数四舍五入原则近似到100整数倍
            printf("Group Number: %d\n",(a[i]+50)/100*100);
        else    //按百位数四舍五入原则近似到1000整数倍
            printf("Group Number: %d\n",(a[i]+500)/1000*1000);
    }
    return 0;
}
