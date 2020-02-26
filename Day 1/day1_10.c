#include<stdio.h>
int main()
{
 int x,y,year;
printf("enter the year:\n");
scanf("%d",&year);
x=year%4;
y=year-x;
y=y+4;
printf("\n%d",y);
return 0;
}
