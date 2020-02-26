#include<stdio.h>
void push(int* q,int x);
void display(int* q);
void pop();
int r=-1,f=-1;
int main()
{
	int ch,q[100],x;
	do
	{
		printf("enter 1: to insert 2: to remove 3: display 4: to quit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&x);
			push(q,x);
		}
		if(ch==2)
			pop();
		if(ch==3)
			display(q);
	}while(ch!=4);
return 0;
}

void push(int* q,int x)
{
	f++;
	q[f]=x;
}
void pop()
{
	r++;	
}

void display(int* q)
{
	for(int i=r+1;i<=f;i++)
		printf("\n%d",q[i]);
}
