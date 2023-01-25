#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c;

    printf("Enter value of A: ");
    scanf("%lf", &a);

    printf("Enter value of B: ");
    scanf("%lf", &b);

    c = a*a + b*b;
    c = sqrt (c);

    printf("The hypotenus is: %lf", c);

    return 0;
}
