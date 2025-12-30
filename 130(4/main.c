#include <stdio.h>

int main()
{
    int i=0;
    char str1[10],str2[100];
    printf("请输入要统计的字符（可包含空格）：\n");
    gets(str1);
    printf("请输入被查找的字符串：\n");
    gets(str2);
    printf("Output:\n查找结果：\n");
    while(str1[i])
    {
        int j=0,count=0;
        while(str2[j])
        {
            if(str1[i]==str2[j])
                count++;
            j++;
        }
        printf("%c %d\n",str1[i],count);
        i++;
    }
    return 0;
}
