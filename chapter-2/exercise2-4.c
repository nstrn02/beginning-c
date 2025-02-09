// Exercise 2-4. Write a program that prompts for the user’s weekly pay in dollars and the hours worked 
//to be entered through the keyboard as floating-point values. The program should then calculate and 
//output the average pay per hour in the following form:
//"Your average hourly pay rate is 7 dollars and 54 cents."
#include <stdio.h>

int main(void)
{
    float weekly_pay = 0.0;
    float working_hours = 0.0; 
    int dollors = 0;
    int cents = 0;

    printf("your weekly pay in dollars:  ");
    scanf("%f", &weekly_pay);
    printf("working hours:  ");
    scanf("%f", &working_hours);

    dollors = (int)(weekly_pay / working_hours);
    cents = ((int)weekly_pay % (int)working_hours);

    printf("Your average hourly pay rate is %d dollars and %d cents.", dollors, cents);
    return 0;
}