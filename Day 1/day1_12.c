#include<stdio.h>
int main()
{
   int a,ans;
   printf("enter any 4 digit number");
   scanf("%d",&a);
   ans=a/100;
	printf("this year is in %d centuary",++ans);
   return 0;
}
