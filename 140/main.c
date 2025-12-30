#include <stdio.h>
#include <math.h>

int main()
{
    int a,c;
    double p,area;
    printf("Input a side of triangle: ");
    scanf("%d",&a);
    p=(a+a+a)/2.0;
    c=3*a;
    area=sqrt(p*(p-a)*(p-a)*(p-a));
    printf("Output:\nThe area of triangle is %.2lf, the circle of triangle is %d.",area,c);
    return 0;
}
