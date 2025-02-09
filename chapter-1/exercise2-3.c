// You’re selling a product that’s available in two versions: type 1 is a standard version 
//priced at $3.50, and type 2 is a deluxe version priced at $5.50. Write a program using only what you’ve 
//learned up to now that prompts for the user to enter the product type and a quantity and then calculates 
//and outputs the price for the quantity entered
#include <stdio.h>

int main(void)
{
    float type1= 3.50;
    float type2 = 5.50;
    int number_of_type1 = 0;        //خودش توی ضرب اعشاری میشه بعدا
    int number_of_type2= 0;

    printf("how many of type1 you want?: ");
    scanf("%d", &number_of_type1);

    printf("how many of type2 you want?: ");
    scanf("%d", &number_of_type2);

    float total = (number_of_type1*type1) + (number_of_type2*type2);

    printf("you have to pay %.2f in total", total);
    return 0;

} 
