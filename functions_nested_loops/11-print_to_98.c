/*
 * File: 11-print_to_98.c
 */
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
#include "6-abs.c"
/**
 * print_to_98 - Display numbers from n to 98 using affichage
 *
 *
 * @n : Starting integer
 *
 * Return: 1 or 0.
 */

/**
 * affichage - Permet de display
 *
 * @n : Parameter
 *
 * Return: 0.
 */


void affichage(int n);
void print_to_98(int n)
{
	if (n < 98)
	{
		for ( ; n < 98 ; n++)
		{
			if (!(n == 0))
			{
				affichage(n);
			}
			else
				_putchar('0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for ( ; n > 98 ; n--)
		{
			affichage(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

void affichage(int n)
{
	int centieme;
	int dizaine;
	int unite;

	centieme = _abs(n) / 100;
	dizaine = (_abs(n) / 10) % 10;
	unite = _abs(n) % 10;
	if (n < 0)
		_putchar('-');
	if (!(centieme == 0))
		_putchar('0' + centieme);
	if (_abs(n) > 9)
		_putchar('0' + dizaine);
	_putchar('0' + unite);
}
