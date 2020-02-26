#include<stdio.h>
union A{
int x;
float y;
double z;
int arr[2];
}al;

int main()
{
	al.y=6.25f;
	printf("x=%x\n",al.x);
	al.z=0.15626;
	printf("%x %x\n",al.arr[1],al.arr[0]);
	printf("%d\n",sizeof(al));
	printf("%f",al.y);
	return 0;
}
