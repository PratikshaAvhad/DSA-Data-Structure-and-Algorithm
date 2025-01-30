#include<stdio.h>
#include<conio.h>
#define max 5
struct stack
{
  int a[max];
  int top;
}s;
void init()
{
 s.top=-1;	 
}
int isempty()
{
  int val;
  if(s.top==-1)
    return 1;
  else
    return 0;  
}
int isfull()
{
 if(s.top==max-1)
   return 1;
 else
   return 0;  	
}
void push(int num)
{
 if(isfull())
 {
 	printf("\n stack is full dont push");
 }
 else
  {
  	s.top++;
  	s.a[s.top]=num;
  	printf("\n pushed successfully..");
  }	
}
void pop()
{
 int val;
 if(isempty())
 {
 	printf("\n stack is empty you cant pop");
 }
 else
 {
 	val=s.a[s.top];
 	s.top--;
 	printf("\n poped value=%d",val);
 }
}
void disp()
{
 int i;
 for(i=s.top;i>=0;i--)
 {
 	printf("%d\t",s.a[i]);
 }	
}
int main()
{
	int ch,num;
	init();
	do{
		printf("\n menu \n 1: push\n 2: pop\n 3:disp\n");
		printf("enter your  choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter number");
			        scanf("%d",&num);
			        push(num);
			        break;
			        
			case 2: pop();
			        break;
			case 3: disp();
			        break;
			default: printf("\n invalide choice");
			         break;        
		}
	}while(ch<4);
}

















