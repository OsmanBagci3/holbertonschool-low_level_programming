/*
 * File: 1-last_digit.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints last digit followed by
 *		n followed by a string
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less "
				"than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
