#include<stdio.h>
int main()
{
	int sum=0;
	int n,i;
	float avg;
	int a[100];
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("Enter %d numbers",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		sum=sum+a[i];
	avg=sum/n;
	printf("Sum=%d....Average=%f",sum,avg);
	return 0;
}
