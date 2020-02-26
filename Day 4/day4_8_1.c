#include<stdio.h>


void display(int *a,int n,int start)
	{	
		if(start>=n)
		{
		 
		 return  ;
		}
		printf("%d",a[start]);
		display(a,n,start+1);
	}





int main()
{
	int a[10],n;
	printf("enter elements no. of elements for the array:\n");
	scanf("%d",&n);
	printf("enter array elments:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		display(a,n,0);

return 0;

}
