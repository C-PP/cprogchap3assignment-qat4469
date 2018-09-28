#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float H20_MASS = 3.0e-23;
	float GRAMS_H20_PER_QUART = 950.;
	float quarts;

	printf("\tEnter an amount of water (in quarts): ");
	scanf("%f_____\b\b\b\b", &quarts);
	printf("\tThere are %.2f molecules in %f quarts of water.\n", quarts * GRAMS_H20_PER_QUART / H20_MASS, quarts);
	system("pause");
	return 0;
}