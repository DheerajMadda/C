#include<stdio.h>


void display(char *a,int n,int start)
        {       
                if(start<0)
                {

                 return  ;
                }
                printf("%c",a[start]);
                display(a,n,start-1);
        }





int main()
{
        char a[10];
        int n;
        printf("enter elements no. of elements for the array:\n");
        scanf("%d",&n);
        printf("enter array elments:\n");
        for(int i=0;i<n;i++)
        {
                scanf(" %c",&a[i]);
        }
                display(a,n,n-1);

return 0;
}

