
#include <stdio.h>

void printMulTables() {

    // Print the header
    int thing;
    for (thing = 0; thing <= 10; thing++) {
        printf("\t%d", thing);
    }
    printf("\n");

    // Print the multiplication table
    int i, j;
    for (i = 1; i <= 10; i++) { // Rows from 1 to 10
        printf("\t%d", i); // Row label
        for (j = 1; j <= 10; j++) { // Columns from 0 to 10
            printf("\t%d", i * j); // Multiply row by column
        }
        printf("\n");
    }
}




int main()
{

	printf("Count to 100 by 10\n");
	// count to 100 by 10
	int count;
	for (count = 0; count <= 100; count += 10)
	{
		printf("%d\n", count);
	}


	printf("Now for multiplication table\n");
	printMulTables();

	return 0;
}
