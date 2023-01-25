#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char unit;
    float temperature;

    printf("Is the temperature in (C) or (F): ");
    scanf("%c",&unit);

    unit = toupper(unit);

    if(unit =='C'){
        printf("Temperature is in %c", unit);
        printf("\nEnter Temperature in Celsius: ");
        scanf("%f", &temperature);
        temperature = (temperature*9/5) + 32;
        printf("\nThe temperature in Fahrenheit is: %.1f", temperature);
    }
    else if(unit == 'F'){
        printf("Temperature is in %c", unit);
        printf("\nEnter Temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        temperature = ((temperature-32)*5)/9;
        printf("%The temperature in Celsius is: %.1f", temperature);
    }
    else{
        printf("Don't be a dum dum, Enter valid Unit");

    }
    return 0;
}
