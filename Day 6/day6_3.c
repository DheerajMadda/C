#include<stdio.h>
int main()
{
	int x=100;
	void *ptr=&x;
	printf("%d",*(int*)ptr);
	printf("%d",(*(int*)ptr)++);
	printf("\n%d",++(*(int*)ptr));
return 0; 
}
