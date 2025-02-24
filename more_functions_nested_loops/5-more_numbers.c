/*
 * File: 5-more_numbers.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * more_numbers - Prints 10x numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; i < 15 ; i++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}

}
