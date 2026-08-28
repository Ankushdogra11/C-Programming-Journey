#include<stdio.h>

int number1, number2, number3;
float Average;

int main(){
	printf("Enter number1:\n");
	scanf("%d",&number1);
	
	printf("Enter number2:\n");
	scanf("%d",&number2);
	
	printf("Enter number3:\n");
	scanf("%d",&number3);
        
       
   Average = (number1 + number2 + number3)/3.0;
	  printf("Average:%.2f",Average);
	 
	  return 0;
} 