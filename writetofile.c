#include <stdio.h>


int main()
{


	FILE* fptr;

	// ope n a file in writting mode
	
	fptr = fopen("examplefile.txt", "w");

	// write some information to the file
	fprintf(fptr, "Here is some example text!\n");


	return 0;
}
