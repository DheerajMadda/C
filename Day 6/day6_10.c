#include<stdio.h>
int* test(int x);
int y;
int main()
{
	int *p,x=10;
	p=test(x);
	printf("%d",*p);

}



int* test(int x)
{

y=x*x;
return &y;
}
