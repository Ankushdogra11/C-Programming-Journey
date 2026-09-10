/*
    Program: Student Grade Management System
    Description: Takes marks of five subjects as input and calculates
                 the total marks, percentage, and grade.
                 Validates marks to ensure they are between 0 and 100.
    Concepts: Functions, Function Prototype, Function Call,
              Return Values, Conditional Statements, Input Validation,
              Floating-Point Calculations
*/
#include <stdio.h>
int calculateTotal(int a, int b, int c, int d, int e);
float calculatePercentage(int total);
void calculateGrade(float percentage);

int main()
{
	int a, b, c, d, e;
	int total;
	float Percentage;
	
printf("Enter Maths marks:\n ");
scanf("%d", &a);

printf("Enter Physics marks:\n");
scanf("%d", &b);

printf("Enter Chemistry marks:\n ");
scanf("%d", &c);

printf("Enter English marks:\n ");
scanf("%d", &d);

printf("Enter C Programming marks:\n ");
scanf("%d", &e);
	
	if(a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100 || d < 0 || d > 100 || e < 0 || e > 100)
{
    printf("Invalid Marks");
    return 0;
}
	total = calculateTotal( a, b, c, d, e);
	printf("Total = %d\n", total);
	
	Percentage = calculatePercentage(total);
	    printf("Total Percentage = %.2f\n " , Percentage);
	calculateGrade(Percentage);
		
 	 return 0;
}
	 
int calculateTotal(int a, int b, int c, int d, int e)
{
      return a + b + c + d + e;
 }
float calculatePercentage( int total)
{
       return ( total / 500.0) * 100;
       }
 void calculateGrade(float percentage)
 { 
 	if(percentage > 90){
 		printf( "A+ Grade");
 	}
 	else if(percentage > 80){
 		printf( "A Grade");
 	}
 	else if(percentage > 70){
 		printf(" B Grade ");
 	}
 	else if(percentage > 60){
 		printf(" C Grade ");
 	}
 	else if(percentage > 50){
 		printf(" D Grade");
 	}
 	else if(percentage > 33){
 		printf("E Grade");
 	}
 	else {
 		printf("Fail");
 	}
 }
 		
 
    
