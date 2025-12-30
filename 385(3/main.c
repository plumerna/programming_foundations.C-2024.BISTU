#include <stdio.h>

int main()
{
    int t,a[3],b[3];
    printf("input number of test(²âÊÔ×éÊý):\n");
    scanf("%d",&t);
    while(t--)
    {
        printf("input the first group version No.:(Ö÷°æ±¾ºÅ ×Ó°æ±¾ºÅ ÐÞ¶©ºÅ)\n");
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        printf("input  thesecond group version No.:(Ö÷°æ±¾ºÅ ×Ó°æ±¾ºÅ ÐÞ¶©ºÅ)\n");
        scanf("%d%d%d",&b[0],&b[1],&b[2]);
        printf("Output:\n");
        if(a[0]>b[0])
            printf("First\n");
        else if(a[0]<b[0])
            printf("Second\n");
        else
        {
            if(a[1]>b[1])
                printf("First\n");
            else if(a[1]<b[1])
                printf("Second\n");
            else
            {
                if(a[2]>b[2])
                    printf("First\n");
                else if(a[2]<b[2])
                    printf("Second\n");
                else
                    printf("Same\n");
            }
        }
    }
    return 0;
}
