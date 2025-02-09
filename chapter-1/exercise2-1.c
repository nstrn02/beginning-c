//Write a program that prompts the user to enter a distance in inches and then outputs that 
//distance in yards, feet, and inches. (For those unfamiliar with imperial units, there are 12 inches in a 
//foot and 3 feet in a yard.)
#include <stdio.h>

int main(void)
{
    long yards = 0L;
    long feet = 0L;
    long inches = 0L;
    const long inches_per_foot = 12L;
    const long feet_per_yard = 3L;

    printf("enter the distance in inches:  ");
    scanf("%ld", &inches);

    yards = inches / (inches_per_foot * feet_per_yard);
    feet = (inches % (inches_per_foot * feet_per_yard)) / inches_per_foot; 
    inches = inches % inches_per_foot; 

    printf("distance in inches is: %ld and in feet is: %ld and in yards: %ld", inches, feet, yards );
    return 0;
}