#include <stdio.h>

int main()
{
   int n,mx,mn,a;
   printf("please input n:");
   scanf("%d",&n);
   mx=-1000000000,mn=1000000000;
   while(n--)
   {
       scanf("%d",&a);
       if(a>mx)
            mx=a;
       if(a<mn)
            mn=a;
   }
    printf("Output:\n%d %d\n",mx,mn);
    return 0;
}
