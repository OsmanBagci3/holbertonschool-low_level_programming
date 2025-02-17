/*
 * File: 0-positive_or_negative
 */
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints n value and
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n<0)
	{
		printf(n," is negative\n");
	}
	else
	{
		printf(n," is positive\n");
	}

	return (0);
}
