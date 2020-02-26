#include<stdio.h>
int main()
{
   float bs,hra,da,pf,gs,nts;
   printf("enter your bs:");
   scanf("%f",&bs);
   hra=(20*bs)/100;
   da=(40*bs)/100;
   gs=bs+hra+da;
   pf=(10*gs)/100;
   nts=gs-pf;
   printf("hra:%f /n da:%f /n gs:%f /n pf:%f /n nts:%f",hra,da,gs,pf,nts);
  return 0;

     


}
