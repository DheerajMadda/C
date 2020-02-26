#include<stdio.h>
#include<stddef.h>
union A{
int x;
int y;
char ch;
};

int main()
{
	union A al;
	al.x=0x10;
	al.y=0x1121;
	al.ch='g';
	printf("%x %x %c\n",al.x,al.y,al.ch);
	printf("%d %d %d %d",sizeof(al),offsetof(union A,x),offsetof(union A,y),offsetof(union A,ch));
	return 0;
}

