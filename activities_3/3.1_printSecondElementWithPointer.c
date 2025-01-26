#include <stdio.h>

int main()
{

	int nums[4] = {25, 50, 75, 100};

	printf("Address of second element: %p\n", nums + 1);

	printf("Address of second element again: %p\n", &nums[1]);

	printf("Value of second element: %d\n", *(nums + 1));



	return 0;
}
