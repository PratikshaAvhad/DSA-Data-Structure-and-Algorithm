#include<stdio.h>
int main()
{
	 struct person
	 {
	 	char name[20];
	 	int age;
	 	long int phn;
	 }p1[100];
	 
	 int main()
	 {
	 	int n,i;
	 	printf("enter limit of person");
	 	scanf("%d",&n);
	 	 for(i=0;i<n;i++)
	 	 {
	 	 	printf("\n enter person name age mobile no");
	 	 	scanf("%s%d%d",&p1[i].name,&p1[i].age,&p1[i].phn);
		  }
		  for(i=0;i<n;i++)
		  {
		  	printf("\n name=%s",p1[i].name);
		  	printf("\n age=%d",p1[i].age);
		  	printf("\n mobile no=%d",p1[i].phn);
		  }
	 }
}














