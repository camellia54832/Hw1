#include <stdio.h>
#include <stdlib.h>

int main()
{
	double weight, height,bmi;

	printf("?魫(kg) ????(m):");
	scanf_s("%lf%lf", &weight,&height);

	bmi = weight / (height*height);
	printf("\nBMI= %lf\n\n", bmi);

	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:      30 or greater\n\n");

	system("pause");
	return 0;
}