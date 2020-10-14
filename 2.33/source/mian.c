#include <stdio.h>


int main(void)
{
	int miles; 
	int gasCost; 
	int mpg; 
	int parkFee; 
	int tolls; 
	int total; 

	
	printf("%s", "enter the total miles driven per day: ");
	scanf_s("%d", &miles);


	printf("%s", "enter the cost per gallon of gasoline: ");
	scanf_s("%d", &gasCost);


	printf("%s", "enter average miles per gallon: ");
	scanf_s("%d", &mpg);

	
	printf("%s", "enter the parking fees per day: ");
	scanf_s("%d", &parkFee);

	
	printf("%s", "enter the tolls per day: ");
	scanf_s("%d", &tolls);


	total = tolls + parkFee + (miles / mpg) * gasCost;

	printf("Your daily cost of driving to work is $%d\n", total);
} 