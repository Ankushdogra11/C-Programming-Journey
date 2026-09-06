/*
    Program: Month and Number of Days Using Switch
    Description: Takes a month number as input and displays the corresponding
                 month name and number of days using a switch statement.
    Concepts: Switch Statement, Case, Break, Default, User Input
*/

#include <stdio.h>

int main(){
int n;

    printf(" Enter Month number :\n");
    scanf("%d",&n);
    
    switch(n)
   {
    case 1 : printf("Month : January\n No. of days = 31 days");
                    break;
    
    case 2 : printf("Month : February \n No. of days = 28 days");
                     break;
    case 3 : printf("Month : March\n No. of days = 31 days");
                     break;
    case 4 : printf("Month : April\n No. of days = 30 days");
                    break;
    case 5 : printf("Month : May\n No. of days = 31 days");
                 break;
    case 6 : printf("Month : June\n No. of days = 30 days");
                     break;
    case 7 : printf("Month : July\n No. of days = 31 days");
                     break;
    case 8 : printf("Month : August\n No. of days = 31 days");
                     break;
    case 9 : printf("Month : September\n No. of days = 30 days");
                     break;
    case 10 : printf("Month : October\n No. of days = 31 days");
                      break;
    case 11 : printf("Month : November\n No. of days = 30 days");
                       break;
    case 12 : printf("Month : December\n No. of days = 31 days");
                       break;
            default : printf(" Invalid Month Number");
  } 
 	 return 0;
}

