#include <stdio.h>
//输出两个日期间的所有闰年，如1900年至1920年（包含1900年和1920年）间的所有闰年

int main()
{
    int year;
    int a,b;
    printf("please input 2 datas: ");
    scanf("%d,%d",&a,&b);
    printf("output:\n");
    for(year=a;year<=b;year++)
    {
        if(year%4==0)
        {
            if(year%100==0)
            {
                if(year%400==0)
                {
                    printf("%d\n",year);
                }
            }
            else
            {
                printf("%d\n",year);
            }
        }
    }
    return 0;
}
