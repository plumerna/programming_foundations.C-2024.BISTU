#include <stdio.h>

int main()
{
    int n,t,number;
    float a=2,b=1,s=0;
    printf("Input:\nPlease input n:");
    scanf("%d",&number);
    if(number<0)
    {
        printf("Output:\nerror input!\n");
        return 0;
    }
    for(n=1;n<=number;n++)
    {
        s+=a/b;
        t=a;
        a+=b;
        b=t;
    }
    printf("Output:\nsum is %9.4f\n",s);
    return 0;
}
