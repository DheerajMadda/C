#include<stdio.h>
int main()
{ 
  int choice;
  float a,b,sum,sub,mod,mul,div;
  printf("enter 2  no ");
  scanf("%f%f",&a,&b);
  printf("1:sum 2:sub 3:mul 4:div 5:mod");
  printf("enter your choice");
  scanf("%d",&choice);
	switch(choice)
	{ 
		case 1:
			sum=a+b;
			printf("sum is : %f ",sum);
			break;
		case 2:
			sub=a-b;
			printf("sub is : %f ",sub);
			break;
		case 3:
			mul=a*b;
			printf("mul is : %f ",mul);
			break;
		case 4:
			div=a/b;
			printf("div is : %f ",div);
			break;
		case 5:
			mod=a%b;
			printf("mod is : %f",mod);
			break;
		default:
			printf("invalid choice");
			
	}

  return 0;
}
