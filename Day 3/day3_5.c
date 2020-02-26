#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter n:\n");
	scanf("%d",&n);
	k=0;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
		printf(" ");
		for(j=1;j<=k+1;j++)
		{
		printf("%d",i);
		}
		k=k+2;
	printf("\n");
	}

	k=0;
	for(i=n-1;i>0;i--)
	{
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		printf("%d",i);

	printf("\n");
	}
	return 0;
}
