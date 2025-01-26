#include <stdio.h>


int main() {

	int nums[4] = {25, 50, 75, 100};
	printf("Now, let us print all of the elements using a pointer and an offset...\n");

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", *(nums + i));
	}
	return 0;
}

