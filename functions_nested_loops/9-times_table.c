/*
 * File: 9-times_table.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * times_table - Prints 9 times table
 *
 *
 * Return: 1 or 0.
 */

void times_table(void)
{
	int i;
	int j;
	int k;
	int lastDigit;
	int firstDigit;

	for( i = 0 ; i < 10 ; i++ )
	{
		for( j = 0 ; j < 10 ; j++ )
		{
			k = i * j;
			if( k < 10 )
			{
				if( j > 0 )
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar('0' + k);
			}
			else
			{
				lastDigit = k % 10;
				firstDigit = k / 10;
				if(j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + firstDigit);
				_putchar('0' + lastDigit);
			}
		}
		_putchar('\n');
	}
}
