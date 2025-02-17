/*
 * File: 6-print_numberz.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints digit numberz
 *
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}

