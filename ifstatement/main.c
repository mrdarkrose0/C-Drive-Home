#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char grade;
    char fname [20];
    char lname[20];
    char location[20];
    int age;

    printf("\nEnter first name: ");
    fgets(fname, 20, stdin);

    printf("\nEnter last name: ");
    fgets(lname, 20, stdin);

    printf("\nEnter location name: ");
    fgets(location, 20, stdin);

    printf("\nEnter Age: ");
    scanf("%d", &age);

    printf("\nEnter Grade: ");
    scanf("%s", &grade);

    if(grade == 'A'){
         printf("Your name is: %s %s \nYour Grade is: %c", fname, lname, grade);
    }
    else if(grade == 'B'){
        printf("Your name is %S %S, You are currently in %S, you are %d years old, your current grade is: %s ", fname, lname, location, age, grade);
    }
    else if(grade == 'C'){
        printf("Your name is %S %S, You are currently in %S, you are %d years old, your current grade is: %s ", fname, lname, location, age, grade);
     }
    else {
        printf("\nYOU FAILED.");
    }
    return 0;
}
