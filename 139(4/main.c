#include <stdio.h>

int main()
{
    int i,j;
    char string[128];
    printf("Input:\nPlease input string:\n");
    gets(string);
    for(i=0,j=0;i<127&&string[i]!='\0';i++)
    {
        if(string[i]>='0'&&string[i]<='9')
        {
            string[j]=string[i];
            j++;
        }
    }
    string[j]='\0';
    printf("\nOutput:\nThe Digit Number is:%d\n",j);
    printf("\nThe Digit Number is following:%s\n",string);
    return 0;
}
