#include<stdio.h>
struct student{
char name[10];
int subjects[5];
};
typedef struct student stud;

int main()
{
	stud s[10];
	int n,i,j;
	float average[10]={0};
//To find number of students and entering their names
	printf("Enter number of students:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter student name:\n");
	scanf("%s",&s[i].name);
	printf("Enter marks of 5 subjects of %s:\n",s[i].name); //Entering marks of those students
	for(j=0;j<5;j++)
	scanf("%d",&s[i].subjects[j]);
	}
//Total of those marks
	for(i=0;i<n;i++)
	{
	for(j=0;j<5;j++)
	average[i]=average[i] + s[i].subjects[j];
	}

//Printing result

	for(i=0;i<n;i++)
	printf("Average marks of %s is %f\n",s[i].name,average[i]/5);

	return 0;
}


