/*
 * File: 1-isdigit.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _isdigit - check if c is a digit number
 *
 * @c : Parameter
 *
 * Return: 1 or 0.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}

	return (0);
}
