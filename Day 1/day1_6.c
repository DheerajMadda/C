#include<stdio.h>
int main()
{
	int temp,a=10,b=20;
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
return 0;
}
