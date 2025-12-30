#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1,n2,i;
    printf("Please input n: ");
    scanf("%d",&n);
    if(n==0)
        return 0;
    else
    {
        if(n>10000)
            printf("Input Error!\n");
        for(i=0;i<n;i++)
        {
            if(i%3==0||i%5==0)
                n1++;
            else
                break;
        }

    printf("Output:\n");
    printf("The ans is: %d",n1);
    }
    return 0;
}
