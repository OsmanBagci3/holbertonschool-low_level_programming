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

	for(i = 0 ; i < 9 ; i++)
	{
		for(j = 0; j < 9 ; j++)
		{
			_putchar(i*j);
			_putchar(',');
		}
	}
}
