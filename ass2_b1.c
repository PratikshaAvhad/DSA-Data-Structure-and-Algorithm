#include<stdio.h>
#include<stdlib.h>
void display(char a[20])
{
  int i,n;
  for(i=0;i<n;i++)
  {
    printf("%s\t",a[i]);
  }
  printf("\n");
}
int main()
{
  char a[100],temp[20];
  int i,n,j;
  printf("enter limit");
  scanf("%d",&n);
  printf("enter array element");
  for(i=0;i<n;i++)
  scanf("%s",&a[i]);
  for(i=1;i<n;i++)
  {
    strcpy(temp,a[i]);
    for(j=i-1;j>=0&&strcmp(a[j],temp)>0;j--)
    {
      if(strcmp(a[j],a[j-1])>0)
      {
    	strcpy(a[j+1],a[j]);
      }
    }
    strcpy(a[j+1],temp);
  }
  printf("\n the sorted array is");
   disply(a);
}
