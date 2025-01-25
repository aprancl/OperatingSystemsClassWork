#include <stdio.h> 

int main()
{

	double pi = 3.14;
	int age = 22;
	char ini = 'A';

	double* p_pi = &pi;
	int* p_age = &age;
	char* p_ini = &ini;


	printf("pi [float]\n\tvalue: %.2f\n\tmemory address: %p\n\tsize of data: %zu\n", *p_pi, p_pi, sizeof(*p_pi));
	printf("age [int]\n\tvalue: %d\n\tmemory address: %p\n\tsize of data: %zu\n", *p_age, p_age, sizeof(*p_age));
	printf("initial [char]\n\tvalue: %c\n\tmemory address: %p\n\tsize of data: %zu\n", *p_ini, p_ini, sizeof(*p_ini));

	return 0;
}
