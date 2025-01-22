#include <stdio.h>
#include <math.h>

float calcArea(float rad)
{
	double pi = acos(-1);
	return pi * pow(rad, 2);
}

int main()
{
	float radius;
	printf("Enter the radius of your circle: ");
	scanf("%f", &radius);

	float ans = calcArea(radius);

	printf("Your area of your cirle is %.2f!\n", ans);

	return 0;
}
