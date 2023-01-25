#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    char grade;
    char fname[25];
    char lname[25];
    char location[25];
    int age;

    printf("\nEnter first name: ");
    fgets(fname, 25, stdin);

    printf("\nEnter last name: ");
    fgets(lname, 25, stdin);

    printf("\nEnter location name: ");
    fgets(location, 25, stdin);

    printf("\nEnter Age: ");
    scanf("%d", &age);

    printf("\nEnter Grade: ");
    scanf("%s", &grade);

    switch(grade){
case 'A':
    printf("Your name is %s %s, You are currently in %s, you are %d years old, your current grade is: %c ", fname, lname, location, age, grade);
    break;
case 'B':
    printf("Your name is %c %c, You are currently in %c, you are %d years old, your current grade is: %c ", fname, lname, location, age, grade);
    break;
case 'C':
    printf("Your name is %c %c, You are currently in %c, you are %d years old, your current grade is: %c ", fname, lname, location, age, grade);
    break;
case 'D':
    printf("Your name is %c %c, You are currently in %c, you are %d years old, your current grade is: %c ", fname, lname, location, age, grade);
    break;
case 'E':
    printf("Your name is %c %c, You are currently in %c, you are %d years old, your current grade is: %c ", fname, lname, location, age, grade);
    break;
    default:
    printf("You did not fill in the grade.");
    }
    return 0;
}
