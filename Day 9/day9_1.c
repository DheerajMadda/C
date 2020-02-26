#include<stdio.h>
#include<stdlib.h>
struct Date{
int day;
int month;
int year;
};

struct Address{
int flatNo;
char city[100];
char state[100];
};

struct Employee{
char name[100];
int empId;
struct Date dat;
struct Address add;
};

int main()
{
	struct Employee e;

//Finding size of structure
	int size;
	size=sizeof(e);

//Finding no. of employees
	int n;
	printf("Enter no. of Employees:\n");
	scanf("%d",&n);

//Creating pointer for dynamic memory allocation
	struct Employee *sptr;
	sptr=(struct Employee *)calloc(n,size);

//Asking data from user
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter Employee Name:\n");
		scanf("%s",&(sptr+i)->name);
		printf("Enter Employee ID:\n");
		scanf("%d",&(sptr+i)->empId);
		printf("Enter Date of birth(DD MM YYYY):\n");
		scanf("%d%d%d",&(sptr+i)->dat.day,&(sptr+i)->dat.month,&(sptr+i)->dat.year);
		printf("Address Details:\nEnter flat No.\n");
		scanf("%d",&(sptr+i)->add.flatNo);
		printf("Enter City:\n");
		scanf("%s",&(sptr+i)->add.city);
		printf("Enter State:\n");
		scanf("%s",&(sptr+i)->add.state);
		printf("-------------------------------------------------------------------\n");
	}
//Printing Output

	for(i=0;i<n;i++)
	{
		printf("Employee %d details::::::\n",i+1);
		printf("Name = %s\n",(sptr+i)->name);
		printf("Employee ID = %d\n",(sptr+i)->empId);
		printf("Date of Birth = %d/%d/%d\n",(sptr+i)->dat.day,(sptr+i)->dat.month,(sptr+i)->dat.year);
		printf("Flat No. = %d\n",(sptr+i)->add.flatNo);
		printf("City = %s\n",(sptr+i)->add.city);
		printf("State = %s\n",(sptr+i)->add.state);
		printf("********************************************************************\n");
	}
	return 0;
}

