#include <stdio.h>


int main()
{

	FILE* fptr = fopen("hello.txt","r");

	char buffer[100];

	int count = 1;
	while (fgets(buffer, 100, fptr))
	{
		printf("[%d] %s\n", count, buffer);
		count++;
	}

	fclose(fptr);



	return 0;
}
