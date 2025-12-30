#include <stdio.h>

int main()
{
    int n,i,a[100],s;
    while(scanf("%d",&n)!=EOF,n)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        s=5*n+a[0]*6;
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                s+=4*(a[i]-a[i+1]);
            else
                s+=6*(a[i+1]-a[i]);
        }
        printf("Output:\n%d\n",s);
    }
    return 0;
}
