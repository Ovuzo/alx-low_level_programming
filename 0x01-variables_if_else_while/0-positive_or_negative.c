#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * 0-positive_or_negative.c - Prints random numbers
 * main - Entry point of the program.
 * @n: The number to be evaluated.
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");
	return (0);
}
