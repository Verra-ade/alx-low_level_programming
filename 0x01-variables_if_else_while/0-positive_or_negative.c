#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Printing random number is positive or negative
 * Return: 0
 *
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0) 
		printf("%D is negative\n", n);
	return (0);
}

