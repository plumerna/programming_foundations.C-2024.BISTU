#include <stdio.h>

int main()
{
    char s[1000],c[2];
    int i;
    printf("please input s:");
    gets(s);
    printf("please input a:");
    gets(c);
    printf("Output:\n");
    for(i=0;s[i];i++)
    if(s[i]!=c[0])
        printf("%c",s[i]);
    printf("\n");
    return 0;
}
