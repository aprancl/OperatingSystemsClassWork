#include <stdio.h>

void printArray(int* arr, int length)
{

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
	int length = sizeof(ages) / sizeof(ages[0]);
	int min = ages[0];
	
	for (int i = 0; i < length; i++)
	{
		int curAge = ages[i];
		if (curAge < min)
		{
			min = curAge;
		}

	}

	printf("ages = ");
	printArray(ages, length);
	printf("The minimum age is %d\n", min);


	return 0;
}
