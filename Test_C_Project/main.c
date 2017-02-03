#include <stdio.h>
#include <stdlib.h>
#include "DavidsInfo.h"
#define MYNAME "Tuna McButter"

/* This is a comment.
    comment
    comment
    comment
    comment.
*/
int main()
{

    //User input
    char firstName[20];
    char crush[20];
    int numberOfChillins;

    printf("\nWhat is your name?\n");
    scanf("%s", firstName);

    printf("Who is your crush?\n");
    scanf("%s", crush);

    printf("How many 'chillins?\n");
    scanf("%d", &numberOfChillins);

    printf("%s and %s are in love and will have %d 'chillins.\n", firstName, crush, numberOfChillins);

    /*
    //Header files
    int girlsAge = (AGE / 2) + 7;
    printf("Girls age is %d \n", girlsAge);
    printf("Mi nombre es %s \n\n", MINENAME);

    //Arrays - David Bare
    char name[11] = "David Bare";
    printf("My name is %s. \n", name);

    name[2] = 'z';
    printf("My new name is %s. \n", name);

    char food[] = "tuna";
    printf("The best food is %s. \n", food);

    strcpy(food, "hamburgers");
    printf("The best food is %s. \n\n", food);

    //Variables
    int age;
    int yearAge;
    age = 25;
    yearAge = 2017-1991;

    int current;
    int birth;
    int currentBirth;
    current = 2017;
    birth = 1991;
    currentBirth = current - birth;

    printf("Birth year calculation is %d.\n", currentBirth);
    printf("David is %d years old.\n", age);
    printf("Based on birth year,\t David is %d years old.\n\n", yearAge);

    //Placeholders
    printf("This is a float character %f.\n", 3.1415926535);
    printf("This is a float character %.2f.\n", 3.1415926535);
    printf("I ate %d hamburgers last night.\n", 56);
    printf("%s is the placeholder string.\n", "PlaceholdeR StrinG");
    printf("This %s has multiple %s and %s on the same line.\n", "LinE", "StringS", "TringS");

    //Single line comment
    //These are the lines that print
    printf("\nThis is the tutorial program.\n");
    printf("This is the second line of the program.\n");
    printf("This is the third line. \t I've inserted a tab.\n");
    printf("This line will play an alert tone on the computer.\a\n\n");
    */

    return 0;
}
