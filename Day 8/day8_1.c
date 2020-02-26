#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
struct employee{
char name[100];
int id;
long int salary;
};
typedef struct employee emp;
int main()
{
	emp e1,*e2;
	printf("Enter name of Employee 1:\n");
	scanf("%s",&e1.name);
	printf("Enter his Employee ID:\n");
	scanf("%d",&e1.id);
	printf("Enter his Salary:\n");
	scanf("%ld",&e1.salary);

	printf("Enter name of Employee 2:\n");
	scanf("%s",&e2->name);
	printf("Enter his Employee ID:\n");
        scanf("%d",&e2->id);
	printf("Enter his Salary:\n");
	scanf("%ld",&e2->salary);

	printf("\nEmployee 1 Details:\nName=%s ID=%d Salary=%ld\n",e1.name,e1.id,e1.salary);
	printf("\nEmployee 2 Details:\nName=%s ID=%d Salary=%ld\n",e2->name,e2->id,e2->salary);

	printf("size of e1=%d\nsize of e2=%d\tOffset%d",sizeof(e1),sizeof(*e2),offsetof(emp, salary));

	return 0;
}

