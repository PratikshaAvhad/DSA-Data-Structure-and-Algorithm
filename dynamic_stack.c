#include<stdio.h>
#include<conio.h>
struct node
{
  int data;
  struct node *next;
};
struct node *top;

void init()
{
	top=NULL;
}
int isempty()
{
	if(top==NULL)
	   return 1;
	else
	   return 0;   
}
void push(int num)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=top;
	top=newnode;
	printf("\n Push succ...");
}
int pop()
{
	int val;
	struct node *temp;
	 if(isempty())
	   printf("\n struct is underflow");
	 else
	  {
	  	temp=top;
	  	val=temp->data;
	  	top=top->next;
	  	free(temp);
	  	return val;
		}  
}
int peek()
{
	return (top->data);
}
void disp()
{
	struct node *temp;
	for(temp=top;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}
int main()
{
	int ch,num;
	init();
	do
	{
		printf("enter your choice");
		printf("\n 1-push \n 2-pop \n 3-peek \n 4-disp");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter number");
			        scanf("%d",&num);
			        push(num);
			        break;
			        
			case 2: pop();
			        break;
					
		    case 3: printf("last element=%d",peek());
			        break;
					
		    case 4: disp();
			        break;						        
		}
	}while(ch<5);
}


