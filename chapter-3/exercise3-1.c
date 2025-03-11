//Exercise 3-1. Write a program that will first allow a user to choose one of two options:
//1. Convert a temperature from degrees Celsius to degrees Fahrenheit.
//2. Convert a temperature from degrees Fahrenheit to degrees Celsius.
//The program should then prompt for the temperature value to be entered and output the new value that 
//results from the conversion. To convert from Celsius to Fahrenheit, you can multiply the value by 1.8 and 
//then add 32. To convert from Fahrenheit to Celsius, you can subtract 32 from the value, then multiply by 
//5, and divide the result by 9.
#include <stdio.h>

int main(void)
{
    double temerature = 0;
    int options = 0;
    double fahrenheit = 0;
    double celsius = 0;

    printf("what's the temperature (in celsius or fahrenheit)?\n");
    scanf("%d", &temerature);
    printf("if u want it in fahrenheit write 1 and write 2 for celsius\n");
    scanf("%d", &options);

    if (options == 1)
    {
        fahrenheit = ((temerature * 1.8) + 32.0) ;
        printf("the temperature is %lf fahrenheit", fahrenheit);
    } 

    else if (options == 2)
    {
        celsius = ((temerature - 32.0 )*5.0 / 9.0) ;
        printf("the temperature is %lf celsius", celsius);
    }
    else 
        printf("please choose one option");

return 0;

}