#include <stdio.h>

//´ı¸Ä
int ReverseNumber(int num)
{
    int rev=0;
    while(num)
    {
        rev-rev*10+num%10;
        num/=10;
    }
    return rev;
}
int main()
{
    int a,b;
    printf("please input a,b:");
    scanf("%d,%d",&a,&b);
    printf("Output:\n");
    if(ReverseNumber(a+b)==(ReverseNumber(a)+ReverseNumber(b)))
       {
           printf("%d\n",a+b);
       }
    else
        puts("NO");
    return 0;
}
