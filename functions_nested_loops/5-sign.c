/*
 * File: 5-sign.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * print_sign - Prints 0 or - or +
 *
 * @n : Parameter entree
 *
 * Return: 1 or 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	
	return (0);
}
