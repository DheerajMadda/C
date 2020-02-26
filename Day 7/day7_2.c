//atoll,
//strtoimax, strtof


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10] = "100";
    int v1 = atoi(a);// converts string data type to int data type
    printf("Value = %d\n", v1);
    char b[20] = "100000000000";
    long v2 = atol(b);//converts string data type to long data type.
    printf("Value = %ld\n", v2);
    char c[10] = "3.14";
    float pi = atof(c);//converts string data type to float data type
    printf("Value of pi = %f\n", pi);
    char binary[10] = "101010101", *e1;
    long x = strtol(binary, &e1, 2);//
    printf("%s in base 2 = %ld in base 10\n", binary, x);
    char number[10] = "3.141592", *e2;
    double PI = strtod(number, &e2);
    printf("pi = %lf\n", PI);
    char hex[10] = "FFFFFFFF", *e3;
    unsigned long X = strtoul(hex, &e3, 16);
    printf("%s in base 16 = %u in base 10", hex, X);
    return 0;
}
