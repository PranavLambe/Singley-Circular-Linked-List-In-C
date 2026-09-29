#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int i, n;
	struct node *head, *newnode, *temp;
	
	printf("Enter the node number:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter the data:");
		scanf("%d",&newnode->data);
		
		newnode->next = NULL;
		
		if(head == NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next =newnode;
			temp= newnode;
		}
	}
	temp->next=head;
	printf("Circular linked list:");
	do
	{
		printf("%d -> ", temp->data);
        temp = temp->next;
	}
	while(temp!=head);
	
		printf("Back to the head.");

	return 0;
}
