#include<stdio.h>
int main()
{
	int a,sum=0,n,val,c[3],d[2],i=0,b,m,j;
	printf("enter the number\n");
	scanf("%d",&a);
	while(a!=0)
	{
		n=a/10;
		val=a%10;
		c[i]=val;
		i++;
		a=n;
	}
	//printf("hi");
/*	for(i=2;i>=0;i--)
	{
               //j=0;
             //  d[j]=c[i];
               printf("%d ",c[i]);
               //j++;
	}*/
	printf("enter the number\n");
        scanf("%d",&b);
        i=0;
        while(b!=0)
        {
                m=b/10;
                val=b%10;
                d[i]=val;
                i++;
                b=m;
        }
//	int sum=0;
        for(i=0;i<3;i++)
	{  for(j=0;j<2;j++)
		{
                  sum=sum+(c[i]*d[j]);
		}

	}
        printf("%d",sum);
return 0;
}
