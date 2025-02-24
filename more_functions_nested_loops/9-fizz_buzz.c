/*
 * File: 9-fizz_buzz.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * print_line - Prints lines
 *
 * @n: Parametre dentree
 *
 */

void main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	_putchar('\n');
}
