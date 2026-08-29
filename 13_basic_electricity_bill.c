/*
    Program: Basic Electricity Bill Calculator
    Description: Takes electricity units consumed as input and calculates the bill based on different unit ranges.
    Concepts: Variables, User Input, Arithmetic Operators, Comparison Operators, If-Else If-Else
*/

#include <stdio.h>

int main(){
int Units;

printf("Enter Units : \n");
scanf("%d",&Units);

if(Units < 0)
{
	printf("Invalid Units");
	}
else if(Units <= 100)
{
	printf("%d * 5 = %d", Units, Units * 5);
}
else if(Units <= 200)
{
	printf("%d * 7 = %d", Units, Units * 7);
}
else if(Units <= 300)
	{
		printf("%d * 9 = %d", Units, Units * 9);
	}
else 
{
	printf("%d * 11 = %d", Units, Units * 11);
	}

return 0;
}


    
