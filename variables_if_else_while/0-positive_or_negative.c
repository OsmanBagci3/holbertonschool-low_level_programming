/*
 * File: 0-positive_or_negative
 */

#include <stdio.h>
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
		printf("%d is negative\n",n);
	}
	else
	{
		printf("%d is positive\n",n);
	}

	return (0);
}
