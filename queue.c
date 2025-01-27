#define MAX 5 
#include<stdio.h>
#include<conio.h>
struct queue
{
	int a[MAX];
	int front,rear;
}*q;
void initq()
{
	q->front=q->rear=-1;
}
int isempty()
{
	if(q->front==-1 || q->front>q->rear)
	   return 1;
	else
	   return 0;   
}
int isfull()
{
	if(q->rear==MAX-1)
	   return 1;
	else
	   return 0;   
}
void insertq(int num)
{
	if(isfull())
	   printf("\n queue is overfull");
	else
	   {
	   	 if(q->front==-1)
	   	    q->front=0;
	   	     q->rear++;
	   	     q->a[q->rear]=num;
	   	      printf("\n insert succ...");
	   }   
}
void delq()
{
	int val;
	 if(isempty())
	   printf("\n queue is underfull");
	 else
	 {
	 	val=q->a[q->front];
	 	  q->front++;
	 	  printf("\n deleted value=%d",val);
	 }  
}
void disp()
{
	int i;
	for(i=q->front;i<=q->rear;i++)
	 {
	 	printf("%d\t",q->a[i]); 
	 }
}
int main()
{
	int ch,num;
	initq();
	do
	{
	 printf("\n 1- insert\n 2- delete\n 3- display\n");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	 	case 1: printf("enter number");
	 	        scanf("%d",&num);
	 	        insertq(num);
	 	        break;
	 	        
	 	case 2: delq();
		       break;
			   
	    case 3:	disp();
		        break;	           
	 }	
	}while(ch<4);
}

