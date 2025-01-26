
#include <stdio.h>


int main()
{

	int count = 10;

	while (count > 0)
	{
		printf("%d\n", count);
		count--;
	}
	printf("Happy New Year!\n");

	printf("Now for even numbers between 0 and 10\n");

	int i = 0;
	while (i < 11)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}

	return 0;
}
