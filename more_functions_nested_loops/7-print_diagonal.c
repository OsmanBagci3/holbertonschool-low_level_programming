/*
 * File: 7-print_diagonal.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * print_diagonal - Print des diagonales
 *
 * @n: Parametre dentree
 *
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
