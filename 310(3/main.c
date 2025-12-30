#include <stdio.h>
#include<string.h>
#include<ctype.h>
//给出一个字母和一个单词，
//计算这个字母在这个单词中出现的概率

int main()
{
    int i,n;
    char c,a[201];
    printf("Please input a char and word:\n");
    scanf("%c%*c%s",&c,a);      //???
    printf("Output:\n");
    for(n=i=0;a[i]!='\0';i++)
        if(c==tolower(a[i])||c==toupper(a[i]))
            n++;
    printf("The ans is: %.5f\n",n*1.0/strlen(a));
    return 0;
}
