#include <stdio.h>

int main(void)
{
    int year = 0;
    int month = 0;
    int day =0;
    
    printf("enter the date like this 2003 12 31\n");
    scanf("%d", &year);
    scanf("%d", &month);
    scanf("%d",&day);

    switch(month)
    {
        case 1:
          printf("january ");
          break;
        case 2: 
          printf("february ");
          break;
        case 3: 
          printf("march ");
          break; 
        case 4: 
          printf("april ");
          break;  
        case 5:
          printf("may ");
          break;
        case 6: 
          printf("june ");
          break;
        case 7: 
          printf("july ");
          break; 
        case 8: 
          printf("august ");
          break;   
        case 9:
          printf("september ");
          break;
        case 10: 
          printf("october ");
          break;
        case 11: 
          printf("november ");
          break; 
        case 12: 
          printf("december ");
          break;               
    }
    

    if ((day % 10 == 1) && (day != 11))
        printf("%dst", day);
        else if ((day % 10 == 2) && (day != 12))
        printf("%dnd", day);
    else if ((day % 10 == 3) && (day != 13))
        printf("%drd", day);
    else
        printf("%dth", day);

   
    printf(" %d\n", year);        
return 0;
        
}