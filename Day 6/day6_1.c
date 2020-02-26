#include<stdio.h>
int main()
{	int a[5]={10,20,30,40,50};
	int *p=a,*q=*(&a+1)-1;
//	printf("%d",*q);  // ans 50
//	printf("%d",*p);  // ans 10

//	printf(" %d",*p++); ans 10
	
//	printf("\n%d",*++p);  ans 10
//	printf("\n%d",(*p)++);ans 10
//	printf("\n%d",++(*p));ans 11
//	printf("\n%d",++*p); ans 11
//	printf("\n%d",*(p+1));ans 20
//	printf("\n%d",*(++p));ans 20
//	printf("\n%d",*q--); ans 50
//	printf("\n%d",*--q); ans 40
//	printf("\n%d",--(*q));ans 49
//      printf("\n%d",--*q);ans 49
//      printf("\n%d",(*q)--);ans 50
//      printf("\n%d",*(q--));ans 50
        printf("\n%d",*(--q));//ans 40

return 0;
}
