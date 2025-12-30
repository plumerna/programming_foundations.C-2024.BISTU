#include <stdio.h>
#include <stdlib.h>
//验证密码是否安全
//1.密码长度大于等于8，不超过16
//2.字符至少来自以下四组中的三组
//1）大写字母  2）小写字母  3）数字   4）特殊符号

int check(char str[]);
int main()
{
    int i,n;
    char str[52];
    int p;
    printf("Input:\n");
    scanf("%s",str);
    p=check(str);
    printf("Output:\n");
    if(p==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}

int check(char str[])
{
    int i;
    int f1=0,f2=0,f3=0,f4=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            f1=1;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            f2=1;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            f3=1;
        }
        else
        {
            f4=1;
        }
    }
    if(i<8||i>16)
        return 0;
    if(f1+f2+f3+f4>=3)
        return 1;
    return 0;
}
