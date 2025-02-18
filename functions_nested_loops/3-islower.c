/*
 * File: 3-islower.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _islower - Depending if c is lowercase
 *
 * @c Parameter
 * 
 *
 * Return: 1 or 0.
 */

int _islower(char c) /**< Caractere. */
{
	if (islower(c))
	{
		return (1);
	}

	return (0);
}
