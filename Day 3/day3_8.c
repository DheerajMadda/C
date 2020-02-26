#include <stdio.h>
int main()
{
        int n,On,rem,result=0;
        printf("Enter 3 digit no:\n");
        scanf("%d",&n);
        On=n;
        while (On!=0)
        {
            rem=On%10;
            result += rem*rem*rem;
            On/=10;
        }
        if(result==n)
            printf("%d is an Armstrong number",n);
        else
            printf("%d is not an Armstrong number",n);
        return 0;
}
