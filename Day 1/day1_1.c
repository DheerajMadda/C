#include<stdio.h>
int main()
{ 
  int choice, a,b,sum,sub,mod,mul;
  float div;
  printf("enter 2  no ");
  scanf("%d%d",&a,&b);
  printf("1:sum 2:sub 3:mul 4:div 5:mod");
  printf("enter your choice");
  scanf("%d",&choice);
	switch(choice)
	{ 
		case 1:
			sum=a+b;
			printf("sum is : %d ",sum);
			break;
		case 2:
			sub=a-b;
			printf("sub is : %d ",sub);
			break;
		case 3:
			mul=a*b;
			printf("mul is : %d ",mul);
			break;
		case 4:
			div=(float)a/b;
			printf("div is : %f ",div);
			break;
		case 5:
			mod=a%b;
			printf("mod is : %d",mod);
			break;
		default:
			printf("invalid choice");
			
	}

  return 0;
}
