#include <stdio.h>

int main()
{
    static char *a[][10]={"","I","II","III","IV","V","VI","VII","VIII","IX",
                            "","X","XX","XXX","XL","L","LX","LXX","LXXX","XCC",
                            "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    int n,t,i,m;
    printf("Please input number: ");
    scanf("%d",&n);
    printf("Output:\n");
    if(n<=0||n>=1000)
    {
        printf("Input error!\n");
        return 0;
    }
    printf("%d=",n);
    for(m=0,i=1000;m<3;m++,i/=10)
    {
        t=(n%i)/(i/10);
        printf("%s",a[2-m][t]);
    }
    putchar(10);
    return 0;
}
