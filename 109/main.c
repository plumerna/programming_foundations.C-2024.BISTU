#include <stdio.h>
//某人年薪N万，欲买一套60平米的房子
//现在价格是200万，假设房子价格以每年百分之K增长，且此人未来年薪不变
//每年所得N万全都积攒起来，问第几年能够买下这套房子（第一年房价200万，收入N万

int main()
{

    int money,j,pursh,k;
    double price=200;
    printf("Please input money and k:");
    scanf("%d%d",&money,&k);
    pursh=0;
    price=200;
    for(j=1;j<=20;j++)
    {
        pursh+=money;
        if(pursh>=price)
        {
            printf("Output:\n");
            printf("Need %d years\n",j);
            return 0;
        }
        price=price*(1+(k/100.0));
    }
    printf("Output:\n");
    printf("Impossible\n");
    return 0;
}
