#include <stdio.h>
//²ÂÊý×Ö
//1.x%a==0
//2.(x+1)%b==0
//3.(x+2)%c==0
//1<=a,b,c<=100

int main()
{
    int n,a,b,c,i;
    printf("Please input test times: ");
    scanf("%d",&n);
    printf("Output:\n");
    while(n--)
    {
        printf("Enter a b c:\n");
        scanf("%d%d%d",&a,&b,&c);
        for(i=1000;i<=9999;i++)
            if(i%a==0&&(i+1)%b==0&&(i+2)%c==0)
                break;
        if(i>9999)
            printf("The ans is: Impossible\n");
        else
            printf("The ans is: %d\n",i);
    }
    return 0;
}
