//Group Activity 25 William Ramirez, Vincent Lam, Ian Lorentz
#include <stdio.h>

extern "C" int main0()
{
	int first;
	int second;
	long third;
	float fourth;
	float fifth;
	double sixth;

	printf("Enter bool, int, long, float, float, and double values: ");
	scanf("%d %d %ld %f %f %lf", &first, &second, &third, &fourth, &fifth, &sixth);
	printf("\n");
	printf("%d %s\n", first, first == 0? "false" : "true");
	printf("%d %#x %#o\n", second, second, second);
	printf("%16ld\n", third);
	printf("%#+13.4g\n", fourth);
	printf("%15.4e\n", fourth);
	printf("%-15.7e\n", fifth);
	printf("%17.3f\n", fifth);
	printf("%ld\n", third);
	printf("%16.2f\n", fourth);
	printf("%13.0lf\n", sixth);
	printf("%14.8f\n", fourth);
	printf("%16.6g\n", sixth);
	return 0;
}
