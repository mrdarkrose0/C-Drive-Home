#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Operator;
    double num1, num2, result;

    printf("\nEnter operator (+ * / - ): ");
    scanf("%c", &Operator);

    switch(Operator){
case '+':
    printf("\nEnter first number: ");
    scanf("%lf", &num1);
    printf("\nEnter second number: ");
    scanf("%lf", &num2);
    result  = num1+num2;
    printf("\nThe sum is: %.1lf", result);
    break;

case '-':
     printf("\nEnter first number: ");
    scanf("%lf", &num1);
    printf("\nEnter second number: ");
    scanf("%lf", &num2);
    result  = num1-num2;
    printf("\nThe sum is: %.1lf", result);
    break;

case '*':
     printf("\nEnter first number: ");
    scanf("%lf", &num1);
    printf("\nEnter second number: ");
    scanf("%lf", &num2);
    result  = num1*num2;
    printf("\nThe sum is: %.1lf", result);
    break;

case '/':
    printf("\nEnter first number: ");
    scanf("%lf", &num1);
    printf("\nEnter second number: ");
    scanf("%lf", &num2);
    result  = num1/num2;
    printf("\nThe sum is: %.1lf", result);
    break;

default:
    printf("Operator Unrecognised! dum dum!");
    }
    return 0;
}
