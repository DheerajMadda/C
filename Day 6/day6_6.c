#include<stdio.h>
int main()
{
	int x=100;
//	const int *p=&x; // it makes value of x constant
//	int const * p = &x;//it makes value of x constant
	int * const p=&x;// it makes the address of x constant
//	const int * const p=&x;//it makes both value and address  constant
	*p=10;
	printf("%d",*p);
//	printf("%d",p++);
	printf("%d",(*p)++);
return 0;
}
