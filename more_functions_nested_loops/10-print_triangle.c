/*
 * File: 10-print_triangle.c
 */
#include <stdio.h>
#include <time.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * print_triangle - Prints triangle
 *
 * @size: Parametre dentree
 *
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = (size - i) - 1 ; j > 0  ; j--)
			{
				_putchar(' ');
			}
			for (j = 0 ; j < i+1 ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');	
		}
	}
	else
	{
		_putchar('\n');
	}
}
