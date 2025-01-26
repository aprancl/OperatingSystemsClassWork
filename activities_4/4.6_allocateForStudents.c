#include <stdio.h>
#include <stdlib.h>

void writeToFileReversedOrder(float* scores, int numScores, char* fileName)
{
	FILE* file = fopen(fileName, "w");

	for (int i = numScores - 1; i >= 0; i--)
	{
		fprintf(file, "%.2f\n", scores[i]);
		
	}

	fclose(file);

}

int main()
{
	int numStudents;
	printf("Enter the numbers of students in the class: ");
	scanf("%d", &numStudents);


	float* studentScores = calloc(numStudents, sizeof(int));

	float score;
	float* curScore = &score;

	printf("Now enter the score for each student in the class...\n");

	for (int i = 0; i < numStudents; i++)
	{
		printf("Student #[%d]: ", i);
		scanf("%f", curScore);
		studentScores[i] = *curScore;
	}


	writeToFileReversedOrder(studentScores, numStudents, "studentScores.txt");


    return 0;
}

