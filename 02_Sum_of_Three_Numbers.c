/*
    Program: Sum of Three Numbers
    Description: Takes three numbers from the user as input and calculates their sum.
    Concepts: Variables, scanf(), printf(), Arithmetic Operators
*/


#include<stdio.h>

int number1, number2, number3;
int Sum;
float Average;

int main(){
	printf("Enter number1:\n");
	scanf("%d",&number1);
	
	printf("Enter number2:\n");
	scanf("%d",&number2);
	
	printf("Enter number3:\n");
	scanf("%d",&number3);

	Sum = number1 + number2 + number3;
	
	printf("Sum : %d + %d +%d = %d\n", number1, number2, number3 , Sum);
	  return 0;
}