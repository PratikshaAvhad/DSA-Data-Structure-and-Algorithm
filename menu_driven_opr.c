#include<stdio.h>
int main()
{
	int n,ch;
	printf("enter a number");
	scanf("%d",&n);
	do
	{
		printf("\n enter your choice");
		printf("\n 1- square\n 2-cube\n 3-even or odd\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\n square of no=%d",n*n);
			        break;
					
			case 2: printf("\n cube=%d",n*n*n);
			        break;
					
			case 3: if(n%2==0)
			            printf("\n no is even");
					 else
					   printf("\n no is odd");
					 break;
		    default: printf("\n invalid choice");
			         break;			    
						  					  
		}
	}while(ch<4);
}
















