#include<stdio.h>
int main()
{
	int  r,c,det;
//	int a[r][c];
	printf("enter row and col:\n");
	scanf("%d%d",&r,&c);
//	int a[r][c];
	if(r==3 && c==3)
	{


		

		printf("enter the mat elem to find determinant:\n");
		int a[r][c];
		for(int i=0;i<r;i++)
		{
		  for(int j=0;j<c;j++)
		 {
		  scanf("%d",&a[i][j]);
		 }
		}      
	 
	det=(a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]))-(a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]))+(a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]));
	printf("det:%d",det);
	}
	return 0;
}
