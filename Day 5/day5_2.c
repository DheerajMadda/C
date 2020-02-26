#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n],b[n],c[n],i;
	printf("enter the elements of 1st array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the elements of 2nd array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d ",c[i]);
	}
return 0;
}
