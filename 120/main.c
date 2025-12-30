#include <stdio.h>
#include<math.h>
//使用Π/4=1-1/3+1/5-1/7+...近似圆周率PI求Π的近似值
//直到某一项的绝对值小于0.000001为止。计算中精度为双精度

int main()
{
    int s;
    double pi,n,t;
    pi=0;
    t=1;
    n=1.0;
    s=1;
    while(fabs(t)>=1e-6)
    {
        pi=pi+t;
        n=n+2;
        s=-s;
        t=s/n;
    }
    pi=pi*4;
    printf("Output:\n");
    printf("PI的近似值为:%.6lf\n",pi);
    return 0;
}
