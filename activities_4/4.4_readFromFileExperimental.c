#include <stdio.h>

int main()
{
	FILE* fptr = fopen("hello.txt", "r");

	// read the hello.txt file again
	int size = 100;
	int buffer[size];
	
	int count = 0;
	while (fgets(buffer, size, fptr))
	{
		printf("[%d] %s\n" ,count, buffer);
		count++;
	}

	// then read the binary data at the end
	int array[10];
	fread(array, sizeof(int), 10, fptr);

	printf("[ ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d, ");
	}
	printf("]\n");

	fclose(fptr);
	
    return 0;
}

