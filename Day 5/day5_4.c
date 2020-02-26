#include<stdio.h>
int main()
{
	int i,j,r1,c1;
	printf("enter rows n columns for a mat:");
	scanf("%d%d",&r1,&c1);
	int a[r1][c1];
	int b[c1][r1]; 
        printf("enter the elements of a matrix:\n");
        for(i=0;i<r1;i++)
        { 
                for(j=0;j<c1;j++)
                {  
                        scanf("%d",&a[i][j]);
                }
        }
	for(i=0; i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{  	
			b[j][i]=a[i][j];
		}
	}
	
	        printf("transpose of  a matrix:\n");
        for(i=0;i<c1;i++)
        { 
                for(j=0;j<r1;j++)
                {  
                        printf("%d",b[i][j]);
                }
	printf("\n");
        }

return 0;


}
