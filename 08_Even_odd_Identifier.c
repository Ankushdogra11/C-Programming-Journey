/*
    Program: Even or Odd
    Description: Takes a number as input from the user and checks whether it is even or odd.
    Concepts: Variables, User Input, Modulus Operator, If-Else
*/
#include <stdio.h>

int main(){
int Number;
  
printf("Enter Number:\n");
scanf("%d",&Number);

if(Number % 2 ==0){
    printf("Number is Even");
}
 else{
      printf("Number is odd");
}

return 0;
}
