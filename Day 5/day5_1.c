#include<stdio.h>
int main()
{
	int n,count=0,i;
	printf("enter the size of an array: ");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
	}
	for(i=n-1;i>=0;i--)
	{
		b[count]=a[i];
		++count;
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
		printf("%d ",a[i]);
	}
	return 0;
}
