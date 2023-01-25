#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a  = sqrt(907);//square root
    float b = pow(3,9);//raise to power
    int c = round(56.5);//nearest whole number
    double d = ceil(9.1);//nearest whole number not less than the input
    float e = floor(100.9);//delete any number after the point
    float f = fabs(-100.50);//convert from negative to positive
    float g = log(4);//logarithms
    float h = sin(45);
    float i = cos(50);
    float j = tan(60);

    printf("%f", a);
        printf("\n%f", b);
            printf("\n%d", c);
                printf("\n%f", d);
                    printf("\n%f", e);
                        printf("\n%.2f", f);
                            printf("\n%f", g);
                                printf("\n%f", h);
                                    printf("\n%f", i);
                                        printf("\n%f", j);


    return 0;
}
