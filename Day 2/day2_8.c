#include<stdio.h>
int main()
{
    int sec,j ,m,s,k,i;
      printf("enter seconds: ");
      scanf("%d",&sec);
      i=sec/3600;
      if( i==0)
      {   printf("hr is :0\n");
      }
     else
    {  printf("hr is :%d \n",i);
    }
   j=sec-3600*i;
   m=j/60;
   if(m==0)
    {
      printf("min is :0 \n");
    }
   else
   { printf("min is:%d \n",m);
   }
  k= sec-(60*m)-(3600*i);
  printf("sec is:%d \n",k);
return 0;
      


}
