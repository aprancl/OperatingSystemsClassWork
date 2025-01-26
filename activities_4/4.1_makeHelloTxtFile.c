#include <stdio.h>

int main()
{

	FILE* fptr = fopen("hello.txt", "w");

	if (fptr != NULL)
	{
		fprintf(fptr, "Hello, \n");
		fprintf(fptr, "How are you?\n");
		fprintf(fptr, "My name is ...\n");
		fprintf(fptr, "What is your name?\n");

	}
	fclose(fptr);


	


	return 0;
}
