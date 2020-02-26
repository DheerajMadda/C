#include<stdio.h>
#include<math.h>

int main()
{
	int x;
	float a;
	char ch='t';
	printf("enter any signed integer:");
	scanf("%d",&x);
	a=sqrt(pow(2,abs(x)));
	printf("%f\n",a);
	putchar(toupper(ch));
return 0;
}
