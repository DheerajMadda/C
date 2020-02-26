#include<stdio.h>
int main()
{
	int a,n,b,i=0,am,an,ap=1;
	printf("enter 3 digit no.");
        scanf("%d",&a);
	 printf("enter sec 2digit  no.");
        scanf("%d",&b);

        n=a;
        while(n>0)
        {
	   n=b%10;
           if(i == 0)
          {
	   am=n;
          }
          if(i == 1)
           {
           an=n;
           }
         
	   n=b/10;
           b=n;
          i++;
        }
    n=a;
   while(n>0)
{
   n=a%10;
   ap=ap*(n*am)*(n*an);
   n=a/10;
   a=n;

}

	printf("ans %d",ap);
        
           
	
return 0;
}
