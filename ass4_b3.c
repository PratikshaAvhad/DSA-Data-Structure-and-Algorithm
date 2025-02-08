#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1;
	char name[20],city[20];
	long int code,f=0;
	f1=fopen("c1.cpp","r");
	if(f1==NULL)
	{
		printf("file not fount");
		exit(0);
	}
	printf("enter city name to  serach");
	scanf("%s",&name);
	while(!feof(f1))
	{
		fscanf(f1,"%s%ld",&city,&code);
		if(strcmp(city,name)==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	  printf("city not found");
	else
	{
	  printf("city found std=%ld",code); 
	 }
	 getch();  
}

