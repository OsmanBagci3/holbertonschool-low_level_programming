/*
 * File: 7-print_base16.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints alphabet all numbers 
 *	of base 16 in lowercase
 *
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		if (n < 10)
		{
			putchar('0' + n);
		}
		else
		{
			putchar('a' + (n - 10));
		}
	}
	putchar('\n');

	return (0);
}
