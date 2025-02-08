#include<stdio.h>
int partition(char m[20][20],int lb,int ub)
{
	char pivot[20],t[20];
	int i=lb;
	int j=ub;
	strcpy(pivot,m[lb]);
	while(i<j)
	{
		while((strcmp(m[i],pivot)<=0) && i<=ub-1)
		  i++;
		while((strcmp(m[j],pivot)>=0) && j>=lb+1)
		  j--;
		if(i<j)
		{
		  strcpy(t,m[i]);
		  strcpy(m[i],m[j]);
		  strcpy(m[j],t);	
		}    
	}
	strcpy(t,m[lb]);
	strcpy(m[lb],m[j]);
	strcpy(m[j],t);
	return j;
}
void quickSort(char m[20][20],int lb,int ub)
{
	int j;
	if(lb<ub)
	{
		j=partition(m,lb,ub);
		quickSort(m,lb,j-1);
		quickSort(m,j+1,ub);
	}
}
int main()
{
  char m[20][20];
  int i,n;
  printf("enter limit");
  scanf("%d",&n);
  printf("enter n months");
   for(i=0;i<n;i++)
    scanf("%s",&m[i]);
   printf("\n Month\n");
    for(i=0;i<n;i++)
     printf("%s\t",m[i]);
    quickSort(m,0,n-1);
	 printf("\n sorted months\n");
	  for(i=0;i<n;i++) 
       printf("%s\t",m[i]);
      
}

