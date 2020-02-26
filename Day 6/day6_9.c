#include<stdio.h>
int *sumpro(int,int);

int main()
{
	int a,b;
	printf("enter elements for a and b\n");
	scanf("%d%d",&a,&b);
	int *p=sumpro(a,b);
	printf("sum:%d and pro:%d\n",p[0],p[1]);

return 0;
}
int *sumpro(int a,int b)
{	static int ab[2];
	ab[0]=a+b;
	ab[1]=a*b;
	return ab;
}
