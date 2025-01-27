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
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter values\n");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
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
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int largest(struct node *head)
{
	int max;
	struct node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
		max=temp->data;
		return max;
	
}
struct node *interchange(struct node*head)
{
	struct node *t1,*t2,*t3;
	t1=head;
	t2=t1->next;
	t3=t2->next;
	while(t2!=head)
	{
		t2->next=NULL;
		t2->next=t1;
		t1->next=t3;
	}
	return head;
}
int main()
{
	int max;
	struct node *head=NULL;
       head=create(head);
      
	 printf("display linked list\n ");
	   disp(head);
	   
	 max=largest(head);
	 printf("\n largest element=%d",max);  
	 
	 printf("\n after interchange=");
	 head=interchange(head);
	 disp(head);
		
		   
}















