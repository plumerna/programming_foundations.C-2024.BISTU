#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    char a[51],c;
    printf("Please input test times: ");
    scanf("%d%*c",&n);
    printf("Output:\n");
    while(n--)
    {
        printf("Enter string:");
        gets(a);
        if(strlen(a)%2==1)
        {
            printf("Input error!\n");
            continue;
        }
        for(i=0;i<strlen(a)-1;i=i+2)
        {
            c=a[i];
            a[i]=a[i+1];
            a[i+1]=c;
        }
        printf("The ans is:\n");
        puts(a);
    }
    return 0;
}
