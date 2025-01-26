#include <stdio.h>
#include <math.h>

float farenhightToCelcius(float farenhight)
{
	return ( 5.0 / 9.0 ) * (farenhight - 32);
}

float calcAreaRectangle(float height, float width)
{
	return height * width;
}

float calcAreaCircle(float radius)
{
	double pi = acos(-1);
	return pi * pow(radius, 2);
}

void printMenu(int* choicePtr)
{
	printf("\n");
	printf("===============================\n");
	printf("---Function-Practice-Program---\n");
	printf("===============================\n");
	printf("Enter a number corresponding to a choice below...\n");
	printf("[1] Farenhight to celcius program\n");
	printf("[2] Calculate the area of a rectangle\n");
	printf("[3] Calculate the area of a Circle\n");
	printf("[4] EXIT\n");
	printf(">>> ");
	scanf("%d", choicePtr);

}

int main() {

	char input[100];
	int choice;
	int* choicePtr = &choice;

	
	// practice loops and switch case here

	while (1)
	{

		printMenu(choicePtr);

		switch (choice)
		{
			case 1:
				printf("===============================\n");
				float farenhight;
				printf("Enter a temperature in farenhight: ");
				scanf("%f", &farenhight);
				float celcius = farenhightToCelcius(farenhight);
				printf("%.2f farenhight is %.2f celcius\n", farenhight, celcius);
				break;
				
			case 2:
				printf("===============================\n");
				float height;
				float width;
				printf("Enter the hieght of the rectangle: ");
				scanf("%f", &height);
				printf("Enter the width of the rectangle: ");
				scanf("%f", &width);
				float rectArea =calcAreaRectangle(height, width);
				printf("The area of the region is %.2f\n", rectArea);
				break;
			case 3:
				printf("===============================\n");
				float radius;
				printf("Enter the radius of the circle: ");
				scanf("%f", &radius);
				float circArea = calcAreaCircle(radius);
				printf("The area of the circle is %.2f\n", circArea);
				break;
			case 4:
				printf("Goodbye\n");
				return 0;
			default:
				printf("Invalid choice\n");
				
		}



	


	}

    return 0;
}

