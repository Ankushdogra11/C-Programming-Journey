/*
    Program: Electricity Bill Calculator Using Function
    Description: Takes electricity units as input and calculates the
                 total bill using different unit-based slabs.
                 Handles negative units as invalid input.
    Concepts: Functions, Function Prototype, Function Call,
              Parameters, If-Else Statements, Arithmetic Operators,
              Conditional Logic, Input Validation
*/

#include <stdio.h>

int electricBill(int units);

int main()
{
	int units , result;
	
	printf("Enter Units : \n");
	scanf("%d",&units);
      
	if(units < 0)
	{
		printf("Invalid Units");
		}
	else{
		result= electricBill(units);
	      printf("Total bill = %d\n", result);
	}
	
	return 0;
}
	 
 int electricBill(int units)
{
	int bill;
	
	if(units <= 100){
		bill = units * 5;
		}
	else if(units <= 200){
		bill = 100 * 5 +  (units - 100) * 7;
		}
	else{
		bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
		}
		return bill;
}

