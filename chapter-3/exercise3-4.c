//Modify the last example in the chapter that implemented a calculator so that the user is 
//given the option to enter y or Y to carry out another calculation and n or N to end the program. (Note: 
    //You’ll have to use a goto statement for this here, but you’ll learn a better way of doing this in the next 
    //chapter.)
    #include <stdio.h>
    int main(void)
    {
     double number1 = 0.0; 
     double number2 = 0.0; 
     char operation = 0;
    again:
     printf("\nEnter the calculation\n");
     scanf("%lf %c %lf", &number1, &operation, &number2);

     switch(operation)
     {
     case '+': 
        printf("= %lf\n", number1 + number2);
        break;
     case '-': 
        printf("= %lf\n", number1 - number2);
        break;
     case '*': 
        printf("= %lf\n", number1 * number2);
        break;
     case '/':
        if(number2 == 0) 
            printf("\n\n\aDivision by zero error!\n");
        else
            printf("= %lf\n", number1 / number2);
        break;

     case '%':
        if((long)number2 == 0)
        printf("\n\n\aDivision by zero error!\n");
     else
        printf("= %ld\n", (long)number1 % (long)number2);
        break;
     default:
        printf("\n\n\aIllegal operation!\n");
        break;
     }
     char answer= 'n';
     printf("\n do you want to calculate another numbers?(y or n):  ");
     scanf(" %c", &answer);
     if (answer == 'y' || answer == 'Y')
        goto again;
     else if (answer == 'n' || answer == 'N')
        printf("end");

     return 0;
    }
    