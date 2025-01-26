// outputs the numbers of characters and new lines and spaces in a given file

#include <stdio.h>

int main()
{

	FILE* fptr  = fopen("hello.txt", "r");

	// the zero here is the offset from the start
	fseek(fptr, 0, SEEK_END);

	printf("File size: %ld\n", ftell(fptr));

	return 0;
}
