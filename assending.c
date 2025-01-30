#include<stdlib.h>
#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *create(struct node *head)
{
	struct node *newnode,*temp;
	int i,n;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter values");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
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
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
struct node *sort(struct node *head)
{
	struct node *pass,*t;
	int temp;
	for(pass=head;pass!=NULL;pass=pass->next)
	{
		for(t=head;t!=NULL;t=t->next)
		{
			if(pass->data<t->data)
			{
				temp=pass->data;
				pass->data=t->data;
				t->data=temp;
			}
		}
	}
	return head;
}
int main()
{
	struct node *head=NULL;
	head=create(head);
	printf("\n display linked list\n");
	disp(head);
	printf("\n display in ascending order\n");
	sort(head);
	
}
	
	

