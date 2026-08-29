/*
    Program: Leap Year Checker
    Description: Takes a year as input from the user and checks whether it is a leap year or not.
    Concepts: Variables, User Input, Modulus Operator, Logical Operators, If-Else
*/

#include <stdio.h>

int main(){
int year;

printf("Enter year:\n");
scanf("%d",&year);

if(year % 400 == 0 || year % 4 ==0 && year % 100 != 0){
	printf("%d is a leap year", year);
	}
else{
	printf("%d is not a leap year", year);
	}
  
return 0;
}
