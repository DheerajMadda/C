#include<stdio.h>
int main()
{
	int flag,flag2,a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
        { 
                for(j=0;j<3;j++)
                {
			if(i==j)
			{
				if(a[i][j]==1)
					flag=1;
				else
					{flag=0;
					goto lable;}
			}
			if(i!=j)
			{
				if(a[i][j]==0)
					flag2=1;
				else
					{flag2=0;
					goto lable;}
			}
                }
        }
lable: if(flag==0 || flag2==0)
		printf("\n this is not a identity matrix:");
if(flag==1 && flag2==1)
	printf("yes yes it is an identity matrix");
return 0;
}
