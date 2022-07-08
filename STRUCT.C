#include<stdio.h>
#include<conio.h>
#include<string.h>

struct EMPLOYEE{
	int id;
	float salary;
	char name[30];
}emp1[30];

int main()
{
	int i,n;
	
	printf("\nenter the number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{        printf("\n%d\n",i+1);
		 printf("\nenter the name:");
		 fflush(stdin);
		 scanf("%s",emp1[i].name);
		 printf("\nenter the id:");
		 scanf("%d",&emp1[i].id);
		 printf("\nenter the salary:");
		 scanf("%f",&emp1[i].salary);
	}
	printf("\n \t ID \t NAME \t SALARY\n");
	for(i=0;i<n;i++)
	{
		printf("___________________________________");
		printf("\n \t %d \t %s  \t %f  \n",emp1[i].id,emp1[i].name,emp1[i].salary);
	}
	getch();
	return 0;
}