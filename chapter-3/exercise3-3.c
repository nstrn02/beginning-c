//Exercise 3-3. Write a program that will calculate the price for a quantity entered from the keyboard, 
//given that the unit price is $5 and there is a discount of 10 percent for quantities over 30 and a 15 
//percent discount for quantities over 50.
#include <stdio.h>

int main(void)
{
    const double price = 5.0;
    const double off30 = 0.1;
    const double off50 = 0.15;
    const int disscount1 = 30;
    const int disscount2 = 50;
    int quantity = 0;
    double total = 0.0;


    printf("how many?\n");
    scanf("%d", &quantity);

    printf("%.2lf", total = quantity * price * (1.0 - (quantity > 50 ? off50 :
                                      (quantity > 30 ? off30 :0.0))));
}