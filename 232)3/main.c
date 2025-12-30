#include <stdio.h>
//a说不和x比，c说不和x，z比

int main()
{
    char a,b,c;
    for(a='x';a<='z';a++)
        for(b='x';b<='z';b++)
        {
           for(c='x';c<='z';c++)
           {
                if(a!='x'&&c!='x'&&c!='z'&&a!=b&&a!=c&&b!=c)
                    printf("output:\nNames is :\na--%c\nb--%c\nc--%c",a,b,c);
           }
        }
    return 0;
}
