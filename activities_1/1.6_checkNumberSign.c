#include <stdio.h>

int main()
{

	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);

	char* ans = (num == 0) ? "zero" : (num < 0) ? "negative" : "positive";
	printf("Your number is %s\n", ans);

	return 0;
}
