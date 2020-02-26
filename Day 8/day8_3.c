#include<stdio.h>
struct employee{
char name[50];
int id;
long int salary;
int YoJ;
};
typedef struct employee emp;
int main()
{
	emp e[10];
        int n,i,currentYear;
        float average=0;
	int highest,lowest;
//To find number of employees and entering their names
        printf("Enter number of employees:\n");
        scanf("%d",&n);
	printf("Enter current year:\n");
	scanf("%d",&currentYear);

        for(i=0;i<n;i++)
        {
        printf("Enter employee name:\n");
        scanf("%s",&e[i].name);
        printf("Enter his employee ID:\n"); //Enter id
	scanf("%d",&e[i].id);
	printf("Enter his salary:\n"); //Enter salary
        scanf("%d",&e[i].salary);
	printf("Enter his Year of Joining:\n"); //Enter year of joining
        scanf("%d",&e[i].YoJ);
	printf("He is working in this Company since %d year.",currentYear-e[i].YoJ);
	printf("\n");
	}
//Average salary
        for(i=0;i<n;i++)
        average=average + e[i].salary;
	printf("The Average Salary of %d employees is = %f\n",n,average);

//Highest salary
	highest=e[0].salary;  //assume highest
        for(i=0;i<n;i++)
	{
        if (e[i].salary>highest)
        highest=e[i].salary;
        }
        printf("Highest Salary = %d\n",highest);
//Lowest salary
	lowest=e[0].salary;  //assume lowest
        for(i=0;i<n;i++)
	{
        if (e[i].salary<lowest)
        lowest=e[i].salary;
        }
        printf("Lowest Salary = %d\n",lowest);

return 0;
}



