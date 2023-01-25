#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool eedd = 1;
    float pies =  3.1415926535897932384;
    double piese =  3.1415926535897932384;
    char f = 100;

    float item1 = 5.55;
    float item2 = 5.55;
    float item3 = 5.55;

    printf("%0.15f\n", pies);
    printf("%0.18lf\n", piese);
    printf("%d\n", eedd);
    printf("%d\n", f);

    printf("Item 1 is: %5.1f\n", item1);
    printf("Item 2 is: %6.1f\n", item2);
    printf("Item 3 is: %7.1f\n", item3);


    return 0;
}
