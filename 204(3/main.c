#include <stdio.h>
/*猴子吃桃，猴子第一天摘下若干个桃子，
当即吃了一半，还不过瘾，又多吃了一个。
第二天早晨又将剩下的桃子吃掉一半，又多吃了一个。
以后每天早晨都吃了前一天剩下的一半零一个。
到第n天早晨想再吃时，就只剩下一个桃子了。
求第一天共摘了多少个桃子。 */
int main()
{
    int i,n,tot;
    printf("Input n: ");
    tot=1;
    scanf("%d",&n);
    printf("Output:\n");
    for(i=n;i>1;i--)
    {
        tot=(tot+1)*2;
    }
    printf("totle=%d\n",tot);
    return 0;
}
