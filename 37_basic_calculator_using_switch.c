/*
    Program: Basic Calculator Using Switch
    Description: Takes two numbers and an arithmetic operator as input,
                 then performs the selected operation using a switch statement.
                 Handles division and remainder by zero.
    Concepts: Switch Statement, Case, Break, Character Input,
              Arithmetic Operators, Conditional Statements
*/

#include <stdio.h>

int main(){
char operator;
int x,y;

printf("Enter x :\n");
scanf("%d", &x);

printf("Enter operator :\n");
scanf(" %c", & operator);

printf("Enter y : \n");
scanf("%d", &y);
    
    switch(operator)
    {
   case '+' :
    	   
    	printf( "Sum = %d",x + y);
    	break;
   case '-' :
    	printf( " Diff = %d" , x - y);
    	break;
   case '*' : 
           printf( "Product = %d",x * y);
          break;
   case '/' : 
           if( y == 0)
   {
   	printf(" Division not defined");
   	}
   else{
           printf( " Division= %d",x/y);
            }
        break; 	
        
    case '%':
    if( y == 0)
   {
   	printf(" Remainder not defined");
   	}
    else{
    	    printf("Remainder = %d", x % y);
  }
         break;
         
    	default : printf("Invalid Input");
}
 	 return 0;
}
	 
    
