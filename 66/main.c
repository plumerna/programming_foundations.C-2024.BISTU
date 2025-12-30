#include <stdio.h>

int main()
{
    int i,t,a,b,c;
    double ans;
    ans=0;
    printf("Please input the a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=a;i++)
    {
        ans=ans+i;
    }
    for(i=1;i<=b;i++)
    {
        ans=ans+(double)i*i;
    }
    for(i=1;i<=c;i++)
    {
        ans=ans+1.0/i;
    }
    printf("Output:\n");
    printf("The ans is: %.4lf\n",ans);
    return 0;
}
