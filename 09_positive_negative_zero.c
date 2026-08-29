/*
    Program: Positive, Negative or Zero
    Description: Takes a number as input from the user and checks whether it is positive, negative, or zero.
    Concepts: Variables, User Input, Comparison Operators, If-Else If-Else
*/

#include <stdio.h>

int main(){
int Number;
  
printf("Enter Number:\n");
scanf("%d",&Number);

if(Number < 0){
    printf("Number is Negative");
}
 else if(Number==0){
      printf("Number is zero");
}
 else {
 	printf("Number is positive");
 	}

return 0;
}
