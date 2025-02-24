/*
 * File: 5-rev_string.c
 */
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
#include "2-strlen.c"
/**
 * rev_string - Print a string in reverse
 *
 * @s: Paramatre dentree
 *
 */

void rev_string(char *s)
{
	int size = sizeof(s);
	int i;

	for (i = size - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
