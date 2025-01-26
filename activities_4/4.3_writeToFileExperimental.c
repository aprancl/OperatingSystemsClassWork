#include <stdio.h>

int main() 
{

	FILE* fptr = fopen("hello.txt", "a");

	if (fptr == NULL) {
		printf("ERROR OPENING FILE.\n");
		printf("Make sure the file exists...\n");
		return 1;
	}

	// now let us try printing to the file in three different ways
	
	fprintf(fptr, "This is some text written to a file using fprintf.\n");
	fputs("This is some text written using fputs.\n", fptr);

	// fwrites is for numbers specifically
	int example_numbers[] = {5,2,3,5,1,2,100};
	int length = sizeof(example_numbers) / sizeof(example_numbers[0]);


	fwrite(example_numbers, sizeof(int), length, fptr);

	fclose(fptr);


    return 0;
}

