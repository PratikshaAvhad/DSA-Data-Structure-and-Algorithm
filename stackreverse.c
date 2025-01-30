#include<stdio.h>
#include<conio.h>
#define max 50
struct stack
{
	char a[max];
	int top;
}s;
void init()
{
	s.top=-1;
}
int isfull()
{
	if(s.top==max-1)
	   return 1;
	else
	   return 0;   
}
void push(char c)
{
	if(isfull())
	{
		printf("\n stack is full dont pushh..");
	}
	else
	{
		s.top++;
		s.a[s.top]=c;
		// printf("\n pushh succ..................");
	}
}
void disp()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		printf("%c",s.a[i]);
	}
}
int main()
{
	char s1[20];
	int i;
	
	printf("enter string");
	scanf("%s",&s1);
	init();
	for(i=0;s1[i]!='\0';i++)
	{
	  push(s1[i]);
    }
	printf("\n reverse string=");
	  disp();
	    
}






























