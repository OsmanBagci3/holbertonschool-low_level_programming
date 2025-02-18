/*
 * File: 8-24_hours.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * jack_bauer - Une fonction
 *
 *
 * Return: 1 or 0.
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			_putchar((h/10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m/10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
