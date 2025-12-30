#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s,p,w,f,d;
    printf("Input: ");
    scanf("%lf %lf %lf",&p,&w,&s);
    if(s<250)
    {
        f=p*w*s;
        printf("Output:\n%.4lf",f);
    }
    else if(s<500)
    {
        f=p*w*s*(1-0.02);
        printf("Output:\n%.4lf",f);
    }
    else if(s<1000)
    {
        f=p*w*s*(1-0.05);
        printf("Output:\n%.4lf",f);
    }
    else if(s<2000)
    {
        f=p*w*s*(1-0.08);
        printf("Output:\n%.4lf",f);
    }
    else if(s<3000)
    {
        f=p*w*s*(1-0.1);
        printf("Output:\n%.4lf",f);
    }
    else
    {
        f=p*w*s*(1-0.15);
        printf("Output:\n%.4lf",f);
    }
    return 0;
}
