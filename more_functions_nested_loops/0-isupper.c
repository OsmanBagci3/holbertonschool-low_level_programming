/*
 * File: 0-isupper.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _isupper - Depending if c is uppercase
 *
 * @c : Parameter
 *
 * Return: 1 or 0.
 */

int _isupper(char c)
{
	if (isupper(c))
	{
		return (1);
	}

	return (0);
}
