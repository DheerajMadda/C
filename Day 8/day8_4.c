
#include<stdio.h>

struct A
{
int x;
char *str; // (or) char str[20];  //anwser:char str[20] because char *str points to the data stored in the literal pool 
};

int main()
{
struct A a1 = { 101, "abc" } , a2;
a1.x=10;
a1.str[20]="hello"; //works?  //answer: yes it works
scanf("%d%s",&a1.x,&a1.str); //works? ///answer:yes
a2 = a1; //shallow copy or deep copy?  //deep copy

printf("%d ... %s",a2.x,a2.str);
printf("%d %d",&a1.x,&a2.x);
return 0;

}
