#include <stdio.h>
#include <string.h>

int main()
{
    char juzi[100];
    int len,w,i,j,longIndex;
    char word[100][100];
    for(i=0;i<20;i++)
        for(j=0;j<100;j++)
            word[i][j]='\0';
    printf("Please input a sentence:\n");
    gets(juzi);
    len=strlen(juzi);
    printf("Output:\n");
    w=0;
    j=0;
    for(i=0;i<len;i++)
    {
        if(juzi[i]!=' '&&juzi[i]!='0')
        {
            word[w][j]=juzi[i];
            j++;
        }
        else
        {
            w++;
            j=0;
        }
    }
    longIndex=0;
    for(i=1;i<=w;i++)
    {
        if(strlen(word[longIndex])<strlen(word[i]))
            longIndex=i;
    }
    printf("The longest word is:%s\n",word[longIndex]); //%sÊä³ö×Ö·û´®
    return 0;
}
