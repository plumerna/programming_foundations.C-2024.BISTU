#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    char *pStr;
    int iCount;
    printf("Please input some sentences,end of each sentence with '.':\n");
    gets(str);
    pStr=strtok(str, " .");
    iCount=0;
    printf("Output:\nEach words' letter number is :\n");
    while(pStr)
    {
        if(iCount++)
        {
            putchar(' ');
        }
        printf("%d",strlen(pStr));
        pStr=strtok(NULL, " .");
    }
    putchar('\n');
    return 0;
}
