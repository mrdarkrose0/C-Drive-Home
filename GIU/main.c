#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name [20];
   char lname [20];
   int age;

   printf("Enter First Name: ");
   scanf("%s", name);

    printf("Enter Last Name: ");
    scanf("%s", lname);

    printf("Enter Age: ");
    scanf("%d", &age);

   printf("Your name is %s, %s and you are %d years old", name, lname, age);
    return 0;
}
