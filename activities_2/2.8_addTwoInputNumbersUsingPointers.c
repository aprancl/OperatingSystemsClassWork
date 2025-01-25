#include <stdio.h>
#include <stdlib.h>


int main()
{

	int* p1 = malloc(sizeof(int));
	int* p2 = malloc(sizeof(int));

	printf("Enter first number: ");
	scanf("%d", p1);

	printf("Enter second number: ");
	scanf("%d", p2);

	printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2);


	return 0;
}
