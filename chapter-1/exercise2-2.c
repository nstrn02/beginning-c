// Write a program that prompts for input of the length and width of a room in feet and 
//inches and then calculates and outputs the floor area in square yards with two decimal places after the 
//decimal point
#include <stdio.h>

int main(void)
{
    long length_inches = 0L;
    long length_feet = 0L;
    long width_inches = 0L;
    long width_feet = 0L;
    const long inches_per_foot = 12L;
    const long feet_per_yard = 3L;
    const double inches_per_yard = 36L;

    printf("room's length ...inches ");
    scanf("%ld", &length_inches);
    printf("room's length ...feet ");
    scanf("%ld", &length_feet);

    double length = (length_feet * inches_per_foot + length_inches)/ inches_per_yard;

    printf("room's width ...inches ");
    scanf("%ld", &width_inches);
    printf("room's width ...feet ");
    scanf("%ld", &width_feet);
    double width = (width_feet * inches_per_foot + width_inches)/ inches_per_yard;

    double s_room = width * length;
    printf("The floor area of the room is: %.2f square yards", s_room);

    return 0;
}