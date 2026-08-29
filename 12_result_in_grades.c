/*
    Program: Grade System
    Description: Takes marks as input from the user, validates the marks and assigns a grade based on the marks obtained.
    Concepts: Variables, User Input, Comparison Operators, Logical Operators, If-Else If-Else
*/

#include <stdio.h>

int main(){
int marks;

printf("Enter marks:\n");
scanf("%d",&marks);

if(marks < 0 || marks > 100)
{
	printf("Invalid marks");
}

else if(marks >= 90)
{
printf("A+ Grade");
}

else if (marks >= 80)
{
	printf("A Grade");
}

else if( marks >= 70)
{
	printf("B Grade");
}

else if (marks >= 60)
{
	printf("C Grade");
}

else if(marks >= 33)
{
	printf("D Grade");
}

else{
	printf("Fail");
}

	return 0;
}


