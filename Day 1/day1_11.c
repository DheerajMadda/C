#include<stdio.h>
int main()
{
	int year,decade;
	printf("enter year between 1901 to 1999: ");
	scanf("%d",&year);
	if(year>1900 && year<=1999)
	{
		decade=year%100;
		if(decade>=1 && decade<=9)
			printf("\n not a decade");
		if(decade>=10 && decade<=19)
                        printf("\n decade is 10's");
		if(decade>=20 && decade<=29)
                        printf("\n decade is 20's");
		if(decade>=30 && decade<=39)
                        printf("\n decade is 30's");
		if(decade>=40 && decade<=49)
                        printf("\n decade is 40's");
		if(decade>=50 && decade<=59)
                        printf("\n decade is 50's");
		if(decade>=60 && decade<=69)
                        printf("\n decade is 60's");
		if(decade>=70 && decade<=79)
                        printf("\n decade is 70's");
		if(decade>=80 && decade<=89)
                        printf("\n decade is 80's");
		if(decade>=90 && decade<=99)
                        printf("\n decade is 90's");
}
return 0;
}

