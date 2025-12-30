#include <stdio.h>
#include <string.h>

int main()
{
    int i,k;
    char s1[128],s2[128],s3[256]={'\0'};
    printf("Please input string1:");
    gets(s1);
    printf("Please input string2:");
    gets(s2);
    for(i=0,k=0;s1[i]!='\0'&&s2[i]!='\0';i++)
    {
        s3[k]=s1[i];
        k++;
        s3[k]=s2[i];
        k++;
    }
    if(s1[i]=='\0')
        strcat(s3,&s2[i]);
    else
        strcat(s3,&s1[i]);
    printf("Output:\nstring1:%s\n",s3);
    return 0;
}
