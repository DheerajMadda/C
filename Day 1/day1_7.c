#include<stdio.h>
float avg(int,int,int,int,int);
int main()
{
	int s1,s2,s3,s4,s5;
	float avge;
	printf("enter 5 sub marks of the student");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	avge=avg(s1,s2,s3,s4,s5);
	printf("%f",avge);
	return 0;
}
