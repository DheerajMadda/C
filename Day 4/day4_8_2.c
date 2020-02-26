#include<stdio.h>


void display(int *a,int n,int start)
        {       
                if(start<0)
                {

                 return  ;
                }
                printf("%d",a[start]);
                display(a,n,start-1);
        }





int main()
{
        int a[10],n;
        printf("enter elements no. of elements for the array:\n");
        scanf("%d",&n);
        printf("enter array elments:\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
                display(a,n,n-1);

return 0;

}

