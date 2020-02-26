#include<stdio.h>
int main()
{
	int i,j,a[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				a[i][j]=1;
				printf("%d",a[i][j]);
			}
			else
			{
				a[i][j]=0;
				printf("%d",a[i][j]);
			}
		}
	printf("\n");
	}
	printf("\n");
        for(i=0;i<3;i++)
        { 
                for(j=0;j<3;j++)
                {
			a[i][j]=0;
			printf("%d",a[i][j]);
                }
	printf("\n");
        }

return 0;
}
