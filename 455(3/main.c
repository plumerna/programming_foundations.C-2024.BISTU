#include <stdio.h>

int main()
{
    int a,n,count=1;
    long int sn=0,tn=0;
    printf("Input:\nPlease input a and n\n");
    scanf("%d,%d",&a,&n);
    while(count<=n)
    {
        tn=tn+a;
        sn=sn+tn;
        a=a*10;
        ++count;
    }
    printf("Output:\na+aa+...=%ld\n",sn);
    return 0;
}
