#include<stdio.h>
struct student
{
	int rno;
	char sname[20];
	int age;
}s1[100];
int partition(struct student s1[100],int lb,int ub)
{
	struct student t;
	int i=lb;
	int j=ub;
	int pivot=s1[lb].age;
	while(i<j)
   {
   	  while(s1[i].age<=pivot&&i<=ub-1)
   	  {
   	  	  i++;
	  }
	  while(s1[i].age>=pivot&&j>=lb+1)
	  {
	  	  j--;
	  }
	  if(i<j)
	  {
	  	 t=s1[i];
	  	 s1[i]=s1[j];
	  	 s1[j]=t;
	  }
   }
   t=s1[lb];
   s1[lb]=s1[j];
   s1[j]=t;
   return j;
}
void quicksort(struct student s1[100],int lb,int ub)
{
	int j;
	if(lb<ub)
	{
		j=partition(s1,lb,ub);
		quicksort(s1,lb,j-1);
		quicksort(s1,j+1,ub);
	}
}
int main()
{
	FILE *f1;
	int i,n;
	f1=fopen("student1.cpp","r");
	if(f1==NULL)
	{
		printf("file not found");
		exit(0);
	 } 
	 i=0;
	 while(!feof(f1))
	 {
	 	 fscanf(f1,"%d%s%d",&s1[i].rno,&s1[i].sname,&s1[i].age);
	 	 i++;
	 }
	 n=i-1;
	 printf("display information student");
	 for(i=0;i<n;i++)
	 printf("\n%d\t%s\t%d",s1[i].rno,s1[i].sname,s1[i].age);
	 quicksort(s1,0,n-1);
	 printf("\n student info");
	 for(i=0;i<n;i++)
	 printf("\n%d\t%s\t%d",s1[i].rno,s1[i].sname,s1[i].age);
}

