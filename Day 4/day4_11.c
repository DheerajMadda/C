    #include<stdio.h>
    int factorial(int);
    int main()
    {
      int n;
      int f;
      printf("Enter an integer to find its factorial\n");
      scanf("%d", &n);
      f = factorial(n);
      printf("%d! = %d\n", n, f);
    return 0;
    }
     
    int factorial(int n)
    {
      if (n == 0)
        return 1;
      else
        return(n * factorial(n-1));
    }
