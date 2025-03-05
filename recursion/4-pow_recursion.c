/*
 * File: 4-pow_recursion.c
 */
#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * pow_recursion - Recursive pow
 *
 * @x: Parametre dentree 1
 * @y: Parametre dentree 2
 *
 *
 * Return: x powered by y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, (y-1)));
	}

	if (y < 0)
	{
		return (-1);
	}
}
