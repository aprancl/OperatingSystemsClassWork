
#include <stdio.h>


int main()
{
	
	float temp;
	float lower = 70.0;
	float upper = 85.0;
	printf("Please enter a temperature in fahrenheit: ");
	scanf("%f", &temp);

	printf("%d\n", lower < temp && temp < upper);

	return 0;
}
