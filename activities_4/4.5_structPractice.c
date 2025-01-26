#include <stdio.h>

struct House {
	char address[75];
	int squareFeet;
	int numBedrooms;
	int numBathrooms;
	float price;
};

void printHouseDetails(struct House obj)
{
	printf("Address: %s\n", obj.address);
	printf("\tSquare Footage: %d ft\n\tNumber of Bedrooms: %d\n\tNumber of Bathrooms: %d\n\tTotal Price: $%.2f\n", obj.squareFeet, obj.numBedrooms, obj.numBathrooms, obj.price);

}

int main()
{

	struct House bobHouse = {"1234 Boardwalk Drive", 3000, 2, 2, 512000};
	struct House maryHouse = {"4321 Park Place Boulevard", 412, 3, 1, 332000};
	struct House jasonHouse = {"0987 Farmhouse Way", 1000, 2, 2, 23000};

	printf("==========\n");
	printHouseDetails(bobHouse);
	printf("==========\n");
	printHouseDetails(maryHouse);
	printf("==========\n");
	printHouseDetails(jasonHouse);
	printf("==========\n");




	return 0;
}

