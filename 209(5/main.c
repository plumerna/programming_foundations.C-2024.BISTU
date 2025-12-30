#include <stdio.h>
#include <math.h>

int main()
{
    void t1(int a,int b,int c);
    void t2(int a,int b,int c);
    void t3(int a,int b,int c);
    int a,b,c,delta;
    double ans0,ans1,sqrt_delta,realpart,imagpart;
    printf("Please input a b c:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Output:\n");
    if(a==0)
    {
        printf("not a quadratic\n");
    }
    else
    {
        delta=b*b-4*a*c;
        if(delta>0)
            t1(a,b,c);
        else if(delta==0)
            t2(a,b,c);
        else
            t3(a,b,c);
    }
    return 0;
}

void t1(int a,int b,int c)
{
    int delta;
    double sqrt_delta,ans0,ans1;
    delta=b*b-4*a*c;
    sqrt_delta=sqrt(delta);
    ans0=(-b-sqrt_delta)/(2.0*a);
    ans1=(-b+sqrt_delta)/(2.0*a);
    printf("distinct real roots:\n%.4f %.4f\n",ans0,ans1);
}

void t2(int a,int b,int c)
{
    double ans0;
    ans0=(-b)/(2.0*a);
    printf("two equal roots:\n%.4f\n",ans0);
}

void t3(int a,int b,int c)
{
    int delta;
    double realpart,imagpart;
    delta=b*b-4*a*c;
    realpart=(-b)/(2.0*a);
    imagpart=sqrt(-delta)/(2.0*a);
    printf("complex roots:\n%.4f+%.4fi %.4f-%.4fi\n",realpart,imagpart,realpart,imagpart);
}
