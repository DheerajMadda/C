#include<stdio.h>
int main()
{
	int i,j,temp,n,sum=0;
	float avg;
	printf("enter the size of an array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("\nsum of array elements is: %d",sum);
	avg=(float)sum/n;
	printf("\navg of array elements :%f",avg);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nmax element in array is: %d min element in array is: %d",a[n-1],a[0]);
/*
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
*/
return 0;
}
