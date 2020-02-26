#include<stdio.h>
#include<string.h>
struct stack
{
	char name[10];
	int id;
}s[5];
void push(char* name,int id);
void pop();
void display();
int top=-1;
int main()
{
	int ch,id;
	char a[100];
	do
	{
		printf("\nenter 1 to insert : 2 to remove : 3 to display : 4 to quit");
		scanf("%d",&ch);
		if(ch==1)
		{
		 printf("\n enter name and id");
		 scanf("%s%d",a,&id);
		 push(a,id);      
		}
		if(ch==2)
		{
			pop();
		}
		if(ch==3)
		{
			display();
		}
		
	}while(ch!=4);
return 0;
}

void push(char* name,int id)
{
	top++;
	s[top].id = id;
	strcpy(s[top].name,name);
}
void pop()
{
	top--;
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("\n%d %s",s[i].id,s[i].name);
	}
}
