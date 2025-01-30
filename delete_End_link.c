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
		printf("enter values");
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
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
struct node*delEnd(struct node*head)
{
	struct node *p,*temp;
	 for(temp=head;temp->next->next!=NULL;temp=temp->next);
	   p=temp->next;
	     temp->next=NULL;
	      free(p);
	    return head;  
}
int main()
{
	struct node *head=NULL;
	int ch,num,i,pose;
	do
	{
		printf("\n 1-create \n 2-display \n 3-delete End \n");
		printf("\n enter  your chice");
		scanf("%d",&ch);
		switch(ch)
	  {
		
		case 1: head=create(head);
		        break;
		case 2: disp(head);
		        break;
		case 3: head=delEnd(head);
				break;
	    default: printf("\n invalid choice");	
	  }
   }while(ch<4);
      		   
}







