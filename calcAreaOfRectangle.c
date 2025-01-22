
#include <stdio.h>


int calcArea(int w, int h)
{
	return w * h;
}

int main()
{
	int w;
	int h;
	printf("Enter the width of your area: ");
	scanf("%d", &w);

	printf("Enter the height of your area: ");
	scanf("%d", &h);

	int ans = calcArea(w, h);
	printf("Your area is %d!\n", ans);

	return 0;
}
