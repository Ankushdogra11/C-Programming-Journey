/*
    Program: Simple Interest Calculator
    Description: Takes principal, rate, and time as input from the user and calculates simple interest.
    Concepts: Variables, User Input, Arithmetic Operators, Floating-Point Calculation
*/

#include <stdio.h>

int main(){

int Principal;
float Rate,Time;
float Interest;

	printf("Enter Principal :\n");
	scanf("%d",& Principal);
	
	printf("Enter Rate :\n");
	scanf("%f",&Rate);
	printf("Enter Time :\n");
	scanf("%f",&Time);
	
	 Interest = ( Principal * Rate * Time) / 100;
	 
	printf("Simple Interest : %.2f\n", Interest);
	
	return 0;
	}


