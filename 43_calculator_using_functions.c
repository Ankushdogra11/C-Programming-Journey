/*
    Program: Calculator Using Functions
    Description: Performs addition, subtraction, multiplication,
                 and division of two numbers using separate
                 user-defined functions.
                 Handles division by zero.
    Concepts: Functions, Function Prototypes, Function Calls,
              Return Values, Switch/Conditional Logic,
              Integer and Floating-Point Operations
*/

#include <stdio.h>
int calculateSum(int a , int b);
int calculateprod( int a , int b);
int calculateSub ( int a , int b);
float calculatediv( float a , float b);
int main()
{
	int a, b;
	int result;
	float divresult;
	
	printf("Enter a & b : \n");
	scanf("%d%d", &a , &b);
	
	result = calculateSum( a , b);
        printf(" Sum = %d\n" , result);
       
       result = calculateprod( a , b);
       printf("Product = %d\n", result);
       
       result = calculateSub( a , b);
       printf("Difference = %d\n", result);
       
       if( b == 0){
       	printf(" Division = Undefined");
       }
        else{
        	divresult = calculatediv( a , b);
        	printf("Division = %.2f", divresult);
        }
     	 return 0;
}
	 
int calculateSum( int a , int b)
{
      return a + b;
}
int calculateprod( int a , int b)
{
      return a * b;
}
int calculateSub ( int a , int b)
{
     return a - b;
}
float calculatediv( float a , float b)
{
     return a / b;
}

