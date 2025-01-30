#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next,*prev;
};
struct node *create(struct node*head)
{
	struct node *newnode,*temp;
	int i,n;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->next=NULL;
		printf("\n enter values\n");
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
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
int main()
{
	struct node *head=NULL;
	head=create(head);
	disp(head);
}

