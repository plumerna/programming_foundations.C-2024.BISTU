#include <stdio.h>

int main()
{
    int n,m,i,t;
    printf("Please input test times: ");
    scanf("%d",&n);
    printf("Output:\n");
    if(n>20||n<=0)
    {
        printf("Input Error!\n");
        return 0;
    }
    while(n--)
    {
        printf("Enter m: ");
        scanf("%d",&m);
        if(m<=0||m>20)
        {
            printf("Input Error!\n");
            return 0;
        }
        t=m;
        for(i=0;i<m*3;i++)
        {
            while(m--)
                printf("ACM");
            printf("\n");
            m=t;
        }
    }
    return 0;
}
