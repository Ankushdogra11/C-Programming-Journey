/*
    Program: Pass/Fail Result Checker
    Description: Takes a result character as input from the user and displays a message based on whether the result is Pass or Fail.
    Concepts: Character Variables, User Input, Character Comparison, If-Else If-Else
*/

#include <stdio.h>

int main(){
char result;

printf("Enter result (P/F)\n");
scanf("%c",& result);

if (result == 'P')
{
	printf("Education is the key to success");
	}
else if( result == 'F')
{
	printf("A Single sheet of paper can't decide your future");
	}
else{
	printf("Invalid Result");
	}
	return 0;
}


