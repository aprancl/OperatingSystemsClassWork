#include <stdio.h>

int main()
{

	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);

	char* ans = (num % 2 == 0) ? "even" : "odd";
	printf("Your number is %s.\n", ans);

	return 0;
}
