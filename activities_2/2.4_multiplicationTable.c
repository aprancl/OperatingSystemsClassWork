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
	printMulTables();

	return 0;
}
