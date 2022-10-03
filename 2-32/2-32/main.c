#include <stdio.h>
#include <stdlib.h>

int main()
{
	float weight, height,bmi;

	printf("體重(kg) 身高(m):");
	scanf_s("%f%f", &weight,&height);

	bmi = weight / (height*height);
	printf("\nBMI= %.5f\n\n", bmi);

	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:      30 or greater\n\n");

	system("pause");
	return 0;
}