#include <stdio.h>

int Principal;
float Rate,Time;
float Interest;

int main(){
	printf("Enter Principal :\n");
	scanf("%d",& Principal);
	
	printf("Enter Rate :\n");
	scanf("%f",&Rate);
	printf("Enter Time :\n");
	scanf("%f",&Time);
	
	 Interest = ( Principal * Rate * Time) / 100;
	 
	printf("Simple Interest : %.2f\n", Interest);
	
	return 0;
	}


