#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,x1,x2,leap;
    printf("Please input a,b,c:");
    scanf("&lf,&lf,&lf",a,b,c);
    leap=b*4*a*c;
    if (leap>0)
    {
        x1=(-b-leap)/2*a;
        x2=(-b+leap)/2*a;
        printf("output:\n");
        printf("x1=%lf, x2=%lf,"x1,x2);
    }
    else if (leap==0)
    {
        x1=(-b-leap/2*a);
        printf("output:\n");
        printf("x=%lf",x1);
    }
    else printf("no answer");
    return 0;
}
