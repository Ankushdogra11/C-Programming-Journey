/*
    Program: Divisibility by 5 and 11
    Description: Takes a number as input and checks whether it is divisible by both, either one, or neither of 5 and 11.
    Concepts: Variables, User Input, Modulus Operator, Logical Operators, If-Else If-Else
*/
#include <stdio.h>

int main(){
int Number;

printf("Enter Number :\n");
scanf("%d",&Number);

if(Number % 5 == 0 && Number % 11 == 0)
{
	printf("Number is divisible by 5 and 11");
}
else if(Number % 5 == 0 && Number % 11 != 0)
{
	printf("Number is divisible by 5 only");
}
else if(Number % 5 != 0 && Number % 11 == 0)
{
	printf("Number is divisible by 11 only");
}
else{
	printf("Not Divisible");
}

return 0;
}


    
