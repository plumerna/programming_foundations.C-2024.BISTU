#include <stdio.h>
#include <math.h>

int main()
{
    char c,str[100];
    int i=0;
    printf("Input:\nÔ­ÎÄ£º");
    while((c=getchar())!='\n')
    {
        if(('a'<=c&&c<='z')||('A'<=c&&c<='Z'))
        {
            c=c+4;
            if(c>'Z'&&c<='Z'+4||c>'z')
                c=c-26;
        }
        str[i]=c;
        i++;
    }
    str[i]='\0';
    printf("Output:\nÃÜÎÄ£º");
    printf("%s\n",str);
    return 0;
}
