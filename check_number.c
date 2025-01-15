
#include <stdio.h>

int main()
{

	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);

	char* ans = (num == 0) ? "zero" : (num < 0) ? "negative" : "positive";
	printf("Your number is %s\n", ans);

	char* ans2 = (num % 2 == 0) ? "even" : "odd";
	printf("Your number is also %s\n", ans2);

	return 0;
}
