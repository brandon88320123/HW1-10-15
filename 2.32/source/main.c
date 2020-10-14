#include <stdio.h>


double bmi_cal(double h, double w) {

	
	return w / h / h;
}


int main(void) {

	double height, weight, bmi;

	printf("Input height(m) and weight(kg) ");
	scanf_s("%lf%lf", &height, &weight);


	bmi = bmi_cal(height, weight);

	printf("%5.2f m, %6.2f kg: BMI = %6.2f\n", height, weight, bmi);


	return (0);
}