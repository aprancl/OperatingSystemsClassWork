#include <stdio.h>


int main()
{
	int numItems = 50;
	float cost = 9.99;

	printf("There are %d items\n", numItems);
	printf("The cost of each item is %.2f\n", cost);

	float total = cost * numItems;

	printf("The total price is %.2f\n", total);

	return 0;
}
