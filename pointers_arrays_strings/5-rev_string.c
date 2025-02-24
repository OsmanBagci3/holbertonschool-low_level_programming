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
	int tabLength = _strlen(s);
	int i;
	char tempArray[tabLength];

	for (i = 0 ; i < tabLength ; i++)
	{
		tempArray[i] = s[tabLength - (i + 1)];
	}

	*s = tempArray;

	for (i = 0 ; i < tabLength - 1 ; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
