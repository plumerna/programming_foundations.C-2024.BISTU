#include <stdio.h>
#include <math.h>

int main()
{
    double v,d;
    int i,time=0;
    int ndrop=1;
    printf("Please input the VUL and d: ");
    scanf("%lf%lf",&v,&d);
    printf("Output:\n");
    while(v>0&&d>0)
    {
        time=0;
        ndrop=1;
        while(v>0)
        {
            for(i=0;i<ndrop;i++)
            {
                v-=d;
                time+=1;
                if(v<=0)
                    break;
            }
            if(i==ndrop)
                time+=1;
            ndrop++;
        }
        printf("%d\n",time);
        printf("continue input: ");
        scanf("%lf%lf",&v,&d);
    }
    return 0;
}
