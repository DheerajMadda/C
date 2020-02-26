#include<stdio.h>
int det3x3(int a[3][3]);
int det2x2(int b[2][2]);
int main()
{

	int choice;
	printf("enter choice to evaluate linear equation: 1. 3 variable 2. 2 variable:\n");
	scanf("%d",&choice);

	if(choice==1)
	{
	int deter1,deter2,deter3,a1,b1,c1,deter,a3,b3,c3,d3,a2,b2,c2,d1,d2;
        float x,y,z;

	printf("enter the linear equa values:a1x+b1y+c1z=d1 , a2x+b2y+c2z=d2 and a3x+b3y+c3z=d3 \n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2,&a3,&b3,&c3,&d3);
	int b[3][3]={{a1,b1,c1},{a2,b2,c2},{a3,b3,c3}};
	deter=det3x3(b);

	int d11[3][3]={{d1,b1,c1},{d2,b2,c2},{d3,b3,c3}};
	 deter1=det3x3(d11);

	int d22[3][3]={{a1,d1,c1},{a2,d2,c2},{a3,d3,c3}};
	 deter2=det3x3(d22);

	int d33[3][3]={{a1,b1,d1},{a2,b2,d2},{a3,b3,d3}};
	 deter3=det3x3(d33);
	x=(float)deter1/deter;
	y=(float)deter2/deter;
	z=(float)deter3/deter;
	printf("\n x=%f y=%f z=%f",x,y,z);
	}
	else if(choice==2)
	{
	  int a1,b1,c1,a2,b2,c2,det,det1,det2;
	  float x,y;
	printf("enter the value for a1x+b1y=c1 and a2x+b2=c2\n");
	scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
	 int a[2][2]={{a1,b1},{a2,b2}};
	 det=det2x2(a);
	 int b[2][2]={{c1,b1},{c2,b2}};
	det1=det2x2(b);
	int c[2][2]={{a1,c1},{a2,c2}};
	 det2=det2x2(c);
	x=(float)det1/det;
	y=(float)det2/det;
	printf("x=%f y=%f\n",x,y);


	}

	else
	{
	 printf("invalid choice\n");
	}
return 0;
}
 int det3x3(int a[3][3])
{
	int det;
/*	int  r=3,c=3,det;

		for(int i=0;i<r;i++)
		{
		  for(int j=0;j<c;j++)
		 {
		  scanf("%d",&a[i][j]);
		 }
		}      
*/	 
	det=(a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]))-(a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]))+(a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]));
	
	
	return det;
	
	
}

int det2x2(int b[2][2])
{
	

	int det=b[0][0]*b[1][1]-b[0][1]*b[1][0];
	
return det;
}
