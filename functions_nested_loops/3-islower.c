/*
 * File: 3-islower.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <unistd.h>
/**
 * _islower - Depending if c is lowercase
 *
 * Return: 1 or 0.
 */

int _islower(char c)
{
	if (islower(c))
	{
		return (1);
	}

	return (0);
}
