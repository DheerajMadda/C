#include<stdio.h>
void sum2(int x,int y);
void sum(int* x,int* y);
int main()
{
	int x=5,y=10;
	sum(&x,&y);
	printf("\n%d %d",x,y);
	sum2(x,y);
return 0;
}
void sum(int* x,int* y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

void sum2(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("%d %d",x,y);
}
