
#include <stdio.h>

int main()
{
	int maxScore = 500;
	int userScore = 423;

	float ans = 100.0 * ((float) userScore / maxScore);

	printf("User score is %d / %d = %.2f%%\n", userScore, maxScore, ans);

	return 0;
}
