#include<stdio.h>
int pop(int* arr);
int push(int x,int* arr);

int top=-1;
int main()
{	int x,a,choice,arr[3];
	do
	{
	 	printf("\nenter 1 to insert : 2 to remove : 3 to quit \n");
		scanf("%d",&choice);
		if(choice==1)
		{
			scanf("%d",&x);
			a=push(x,arr);
			printf("\nelement %d is at top of array",a);
		}
		if(choice==2)
		{
			a=pop(arr);
			printf("\nelement %d was at bottom",a);
		}
	}while(choice!=3);
return 0;
}

int push(int x,int* arr)
{
	if(top==2)
	{	
		printf("\n array is full");
		return arr[top];
	}
	top++;
	arr[top]=x;
	return arr[top];
}

int pop(int* arr)
{
	if(top==-1)
	{
		printf("\n array is already empty");
		return arr[top];
	}
	int a=arr[top];
	top--;
	return a;
}
