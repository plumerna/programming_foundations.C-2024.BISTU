#include <stdio.h>
//有n个人围成一圈，从1开始排号。
//从第1个人开始报数（从1到3报数），凡到3的人退出圈子
//问最后留下的是原来第几号的那位

int main()
{
    int n,i,cur;
    int next[1000];
    printf("Please input how many people join this game:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        next[i]=(i+1)%n;
    cur=0;
    for(i=0;i<n-1;i++)
    {
        cur=next[cur];
        next[cur]=next[next[cur]];
        cur=next[cur];
    }
    printf("Output:\n");
    printf("The last people's number is ");
    printf("%d.\n",cur+1);
    return 0;
}
