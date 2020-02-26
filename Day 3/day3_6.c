#include <stdio.h>
int main()
{
   int i, n, p = 0;
   printf("Enter a number: \n");
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
      if(n%i==0)
         p++;
   }
   if(p==2)
      printf("Entered number is a prime number");
   else
      printf("Entered number is not a prime number");
return 0;
}
