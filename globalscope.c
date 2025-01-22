#include <stdio.h>

int x = 10;

void myFunction()
{
	int x = 22;

	printf("%d\n", x);
}


int main()
{

	myFunction();

	printf("%d\n", x);

	return 0;
}
