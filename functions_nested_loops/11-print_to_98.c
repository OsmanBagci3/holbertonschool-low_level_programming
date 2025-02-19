/*
 * File: 10-add.c
 */
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
#include "6-abs.c"
/**
 * add - Adding two integers
 *
 * @n : Starting integer
 *
 * Return: 1 or 0.
 */

void print_to_98(int n)
{
	int firstDigit;
	int lastDigit;
	int centieme;

	if (! (n == 98))
	{
		if (_abs(n) < 10 )
		{
			if (n < 0)
			{
				_putchar('-');
				_putchar('0' + n);
			}
			else
			{
				_putchar('0' + n);
			}
		}
		else
		{
			centieme = _abs(n) / 100;
			firstDigit = _abs(n) / 10;
			lastDigit = _abs(n) % 10;
		}
		if (n < 0)
		{
			_putchar('-');
			if (!(centieme == 0))
			{
				_putchar('0' + centieme);
			}
			_putchar('0' + firstDigit);
			_putchar('0' + lastDigit);

		}
		else
		{
			if (!(centieme == 0))
			{
				_putchar('0' + centieme);
			}
			_putchar('0' + firstDigit);
			_putchar('0' + lastDigit);
		}

	if (n < 98)
	{
		for (n = n+1 ; n < 98 ; n++)
		{
			_putchar(',');
			_putchar(' ');
			if (_abs(n) < 10)
			{
				if (n < 0)
				{
					_putchar('-');
					_putchar('0' + n);
				}
				else
				{
					_putchar('0' + n);
				}
			}
			else
			{
				firstDigit = _abs(n) / 10;
				lastDigit = _abs(n) % 10;

				if (n < 0)
				{
					_putchar('_');
					_putchar('0' + firstDigit);
					_putchar('0' + lastDigit);
				}
				else
				{
					_putchar('0' + firstDigit);
					_putchar('0' + lastDigit);
				}
			}
		}
	}
	else if (n > 98)
	{
		for (n = n-1 ; n > 98 ; n--)
		{
			_putchar(',');
			_putchar(' ');

			centieme = _abs(n) / 100;
			firstDigit = _abs(n) / 10;
			lastDigit = _abs(n) % 10;

			if (!(centieme == 0))
			{
				_putchar('0' + centieme);
			}

			_putchar('0' + firstDigit);
			_putchar('0' + lastDigit);
		}
	}

	_putchar(',');
	_putchar(' ');
	_putchar('9');
	_putchar('8');
	}
	else
	{
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');
}
