/*
 * File: 4-isalpha.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _isalpha - Check if c is letter
 *
 * @c : Parameter
 *
 * Return: 1 or 0.
 */

int _isalpha(char c)
{
	if (isalpha(c))
	{
		return (1);
	}

	return (0);
}
