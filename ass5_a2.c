#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next,*prev;
};
struct node *create(struct node *head)
{
	int i,n;
	struct node *newnode,*temp;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter values");
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			temp=head=newnode;
			newnode->next=head;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
			newnode->next=head;
		}
	}
	return head;
}
void disp(struct node *head)
{
	struct node *temp;
	temp=head;
	do
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}while(temp!=NULL);
}
int main()
{
	struct node *head=NULL;
	head=create(head);
	printf("\n disply singly circular linked list\n");
	disp(head);
}

