#include <stdio.h>
#include <stdlib.h>

//John invest $5,000 in a savings account at an annual interest rate of 7% for 5 years. (a) how monney did h earned in interest? (b) what is the ttal value of his savings account at this point

float i, p, t, r;

/*
i don't know why this code is not working at all.
*/
int main()
{
   printf("Enter your Principal: ");
   scanf("%f", &p);


    printf("Enter your Annual Interest rate: ");
    scanf("%f", &r);
    r = r/100;

    printf("Enter the number of years: ");
    scanf("%f", &t);

    printf("Your total interest in 5 years is: %.0f", i = p*t*r);

    return 0;
}
