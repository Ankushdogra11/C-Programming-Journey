#include <stdio.h>

int a,b,x;

int main(){
 printf("Enter a:\n");
 scanf("%d",&a);
 printf("Enter b:\n");
 scanf("%d",&b);
 
printf("Before swapping a : %d and b : %d\n", a,b);
          
x = a;
a = b;
b = x;

printf("After swapping a : %d and b : %d",a,b);

return 0;

}