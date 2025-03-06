/*
 * File: exponentiation.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * puissance - compute x power n 
 *
 * @x: Number
 * @n: Exponent
 *
 * Return: Result of x power n
 *
 */

int puissance(int x, int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n % 2 == 0)
	{
		return (puissance(x, n/2) * puissance(x, n/2));
	}
	else
	{
		return (x * puissance(x, n-1));
	}
}
