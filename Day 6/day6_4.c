#include<stdio.h>
int main()
{
	int i,arr[5],(*parr)[5];
	printf("\n enter the number of arr elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	parr=&arr;
	printf("\n%d ",sizeof(parr));
	printf("\n%d ",sizeof(*parr));
	printf("\n%d ",sizeof(**parr));
	printf("\n%d ",**parr);
	printf("\n%d ",*(*parr+2));
return 0;
}
