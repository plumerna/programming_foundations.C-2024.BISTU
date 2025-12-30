#include <stdio.h>
#include <stdlib.h>

struct student
{
    int number;
    int score;;
};

int main()
{
    struct student students[101];
    int n, i,j;
    struct student temp;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&students[i].number,&students[i].score);
        }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(students[j].score>students[j+1].score)
            {
                temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
            else if(students[j].score==students[j+1].score)
            {
                if(students[j].number>students[j+1].number)
                {
                    temp=students[j];
                    students[j]=students[j+1];
                    students[j+1]=temp;
                }
            }
        }
    }
    printf("Output:\n");
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",students[i].number,students[i].score);
    }
    exit(0);
    }
    return 0;
}
