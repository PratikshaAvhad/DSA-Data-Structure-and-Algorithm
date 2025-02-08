#include<stdio.h>
#include<stdlib.h >
int main()
{
  struct emp
  {
    int eno;
    char ename[10];
  }e1[100],temp;
  int i,n,pass;
  FILE *f1;
  f1=fopen("emp.txt","r");
  if(f1==NULL)
  {
    printf("file not found");
    exit(0);
  }
  i=0;
  while(!feof(f1))
  {
    fscanf(f1,"%d%s",e1[i].eno,e1[i].ename);
    i++;
  }
  n=i;
  printf("\n before sort emp into");
  for(i=0;i<n;i++)
  {
    printf("\n %d%s",e1[i].eno,e1[i].ename);
  }
    for(pass=1;pass<n;pass++)
    {
      for(i=0;i<n-pass;i++)
     {
       if(strcmp(e1[i].ename,e1[i+1].ename)>0)
       {
	    strcpy(temp,e1[i].ename);
	    strcpy(e1[i].ename,e1[i+1]);
	    strcpy(e1[i].ename,temp);
       }
	 printf("\n emp info=");
	 for(i=0;i<n;i++)
       {
	    printf("%d%s",e1[i].eno,e1[i].ename);
       }
     }
   }
   
 }

