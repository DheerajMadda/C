
#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5;
	float avg,avg1;
	printf("Enter 5 subject marks:\n");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	avg=(n1+n2+n3+n4+n5)/5;
	avg1=((float)(n1+n2+n3+n4+n5))/5;
	printf("%f %f",avg,avg1);
	return 0;
}