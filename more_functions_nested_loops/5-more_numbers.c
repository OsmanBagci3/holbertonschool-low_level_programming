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
	int unite;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			unite = j % 10;

			if (j > 9)
			{
				_putchar('0' + j / 10);
			}

			_putchar('0' + unite);
		}
		_putchar('\n');
	}

}
