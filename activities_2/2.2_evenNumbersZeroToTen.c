#include <stdio.h>

int main()
{
	printf("Printing even numbers from 0 to 10 using while loop...\n");

	int i = 0;
	while (i < 11)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}

}
