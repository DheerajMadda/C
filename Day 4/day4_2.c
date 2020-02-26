#include<stdio.h>
int main()
{
	int k1,k2,p1,p2,y1,y2,i=1,x=10,q=20;
	k1=++i;
	k2=i++;
	printf("%d %d",k1,k2);
	y1=x++*10;
	y2=++x*10;
	printf("\n%d %d",y1,y2);
	p1=q--/3;
	p2=--q/3;
	printf("\n%d %d",p1,p2);
return 0;
}
