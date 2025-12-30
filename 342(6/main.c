#include<stdio.h>

struct animal
{
/******start******/
    int No;
    char name[50];
    int count;
}ani[5];

int main()
{
    int i,n;
    printf("Input the number(<50):\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ani[i].No);
        scanf("%s",ani[i].name);
        scanf("%d",&ani[i].count);
    }
/******end******/

	printf("Output:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", ani[i].No);
		printf("%s ", ani[i].name);
		printf("%d\n", ani[i].count);
	}

	return 0;
}
