    #include<stdio.h>
    int main()
    {
        int a = 1, b = 6, c = 3, d = 4;
        int max;
        // Find the greater number in a or b.
        max = (a > b? a : b);  
        /* Find the greater number in c and d, and compare to the previously
           found maximum in a and b. */
        max = (c > d? (c > max? c : max) : (d > max? d : max));
        printf("Max: %d\n", max);
        return 0;
    }
