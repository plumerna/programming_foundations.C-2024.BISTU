#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void output(struct node *head);

int main()
{
	struct node a, b, c;
	struct node *head;

	printf("Input:\n");
	/******start******/
	scanf("%d",&a.data);
    scanf("%d",&b.data);
    scanf("%d",&c.data);
    head=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;
	/******end******/
	printf("Output:\n");
	output(head);
	return 0;
}

void output(struct node *head)
{
	while (head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}
