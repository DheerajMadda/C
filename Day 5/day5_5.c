#include<stdio.h>
int main()
{

	int r,c,i,j,sum=0;
	printf("enter the row n column of a mat:\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("enter elements:\n");
        for(i=0;i<r;i++)
        { 
                for(j=0;j<c;j++)
                {  
                        scanf("%d",&a[i][j]);
                }
        }
	        
        for(i=0;i<r;i++)
        { 
                for(j=0;j<c;j++)
                {  
                       if(i==j)
			{ sum=sum+a[i][j];
			}
                }
	}
	printf("the trace is :%d",sum);
return 0;       

 }


