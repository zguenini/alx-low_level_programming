#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * The variable n will store a different value
 * The program output will be:
 *     - The number, followed by
 *     - If the number is greater than 0: is positive
 *     - If the number is 0: is zero
 *     - If the number is less than 0: is negative
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
