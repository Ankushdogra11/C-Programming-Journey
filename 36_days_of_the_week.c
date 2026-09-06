/*
    Program: Days of the Week Using Switch
    Description: Takes a number from 1 to 7 and displays the corresponding day of the week using a switch statement.
    Concepts: Switch Statement, Case, Break, Default, User Input
*/
#include <stdio.h>

int main(){
int day;

printf("Enter day :\n");
scanf("%d", &day);
    
    switch(day)
    {
    	case 1 : printf("Monday");
    	break;
    	case 2 : printf("Tuesday");
    	break;
    	case 3 : printf("Wednesday");
    	break;
    	case 4 : printf("Thursday");
    	break;
    	case 5 : printf("Friday");
    	break;
    	case 6 : printf("Saturday");
    	break;
    	case 7 : printf("Sunday");
    	break;
    	default : printf("Invalid Input");
}
 	 return 0;
}
	 
    
