#include <stdio.h>

int main(void)
{
	double Weight;
	double Height;
	double BMI;
	double res;
	printf("Enter your Weight(kg) and Height(cm) :");
	scanf_s("%lf%lf", &Weight, &Height);
	Height /= 100;
	BMI = Weight / (Height * Height);
	res = (BMI >= 20.0) && (BMI < 25.0);
	printf("%s", (res) ? "it's the standard" : "You need to take care of my weight");
	return 0;
}