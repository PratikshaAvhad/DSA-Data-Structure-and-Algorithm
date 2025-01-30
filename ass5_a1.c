#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *create(struct node *head)
{
	int i,n;
	struct node *temp,*newnode;
	printf("\n enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter values");
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		 {
		 	temp->next=newnode;
		 	temp=newnode;
		 }
	}
	return head;
}
void disp(struct node *head)
{
	struct node *temp;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}
int main()
{
	struct node *head=NULL;
	head=create(head);
	printf("\n disply linked list");
	disp(head);
}
