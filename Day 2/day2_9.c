#include<stdio.h>
int main()
{
	int a,k,m,n,temp;
	printf("enter any 5 digit number");
	scanf("%d",&a);
	m=a;
	n=a%10;
	while(m>0)
	{
		k=m%10;
		if(k>n)
		{
			temp=k;
			n=k;
		}
	k=m/10;
	m=k;
	}
printf("%d",temp);
return 0;
}
