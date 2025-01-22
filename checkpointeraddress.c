#include <stdio.h>

int main()
{

	int nums[4] = {25, 50, 75, 100};

	printf("%p\n", nums + 1);

	printf("%p\n", &nums[1]);

	printf("%d\n", *(nums + 1));


	printf("Now, let us print all of the elements...\n");

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", *(nums + i));
	}


	return 0;
}
