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
 * Return: 1 or 0.
 */

/*
 * c - Parametre d entre
 */

int _islower(char c)
{
	if (islower(c))
	{
		return (1);
	}

	return (0);
}
