/*
 * File: 3-print_numbers.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * print_numbers - Print numbers from 0 to 9
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
