
#include <stdio.h>

int main()
{
	// ask for user input
	
	float temp;
	printf("Enter your temperature in farenhight here: ");
	scanf("%f", &temp);

	float celc = ( 5.0 / 9.0 ) * (temp - 32);

	printf("It is %.2f celsius out!\n", celc);



	return 0;
}
