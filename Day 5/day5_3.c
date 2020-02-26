#include<stdio.h>
int main()
{
	int m,n,i,j;
	int choice;
	printf("enter your choice: 1. add and sub, 2.multiplication ");
	scanf("%d",&choice);
	if(choice==1)
	{
	printf("enter the number of rows: ");
	scanf("%d",&m);
	printf("\nenter the number of columns: ");
	scanf("%d",&n);
	int a[m][n],b[m][n],add[m][n],sub[m][n],mul[m][n];
	printf("\nenter the value of 1st matrix: ");
	 for(i=0;i<m;i++)
        { 
                for(j=0;j<n;j++)
                {
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter the value of 2nd matrix: ");
         for(i=0;i<m;i++)
        { 
                for(j=0;j<n;j++)
                {  
                        scanf("%d",&b[i][j]);
                }
        }

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("\n addition: ");
	for(i=0;i<m;i++)
        { 
                for(j=0;j<n;j++)
                {  
                        printf("%d ",add[i][j]);
                }
        }
	printf("\n substraction: ");
	for(i=0;i<m;i++)
        { 
                for(j=0;j<n;j++)
                {  
                        printf("%d ",sub[i][j]);
                }
        }
	} // end of if
	else if(choice==2)
	{
	int r1,r2,c1,c2;
	
	printf("\n enter the row and column for first matrix:");
	scanf("%d%d",&r1,&c1);
	int mat1[r1][c1];
	printf("\n enter the row and column for second matrix:");
	scanf("%d%d",&r2,&c2);
        int mat2[r2][c2];
	int mul[r1][c2];
	if(c1==r2)
	{
		printf("enter the first matrix:\n");
	for(i=0;i<r1;i++)
        { 
                for(j=0;j<c1;j++)
                {  
                        scanf("%d",&mat1[i][j]);
                }
        }
	        printf("enter the second matrix:\n");
        for(i=0;i<r2;i++)
        { 
                for(j=0;j<c2;j++)
                {  
                        scanf("%d",&mat2[i][j]);
                }
        }

	for(i=0;i<r1;i++)
	{	
		for(j=0;j<c2;j++)
			{ 
			   mul[i][j]=0;
			  for(int k=0;k<r2;k++)
				{  
 				   mul[i][j]=mul[i][j]+mat1[i][k]*mat2[k][j];
				}
			}
	}
	
	        printf("multi of matrix:\n");
        for(i=0;i<r1;i++)
        { 
                for(j=0;j<c2;j++)
                {  
                        printf("%d ",mul[i][j]);
                }
		printf("\n");
        }








	}
	else
	{	printf("multi cannot be performed:");
	}

	} //end of else if
 	

	else 
	{
		printf("wrong choice");
	}
return 0;
}
