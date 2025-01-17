
#include <stdio.h>



void printArray(int* arr, int length)
{

	// how to calculate the size 
	printf("[ ");
	for (int i = 0; i < length; i++) 
	{
		printf("%d ", arr[i]);
	}

	printf("]\n");
}

int main()
{

	int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
	int sum = 0;
	int length = sizeof(ages) / sizeof(ages[0]);


	for (int i = 0; i < length; i++)
	{
		sum += ages[i];
	}

	float avg = (float)(sum) / length;

	printArray(ages, length);
	printf("The average is %.2f\n", avg);


	return 0;
}
