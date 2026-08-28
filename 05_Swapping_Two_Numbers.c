/*
    Program: Swapping Two Numbers
    Description: Takes two numbers as input from the user and swaps their values using a temporary variable.
    Concepts: Variables, User Input, Assignment Operator, Temporary Variable
*/

#include <stdio.h>

int main(){
int a,b,temp;

 printf("Enter a:\n");
 scanf("%d",&a);
 printf("Enter b:\n");
 scanf("%d",&b);
 
printf("Before swapping a : %d and b : %d\n", a,b);
          
temp = a;
a = b;
b = temp;

printf("After swapping a : %d and b : %d",a,b);

return 0;

}