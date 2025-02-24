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
	int size = _strlen(s);
	int i;

	char tempValue;

	for (i = 0 ; i < size / 2 ; i++)
	{
		tempValue = s[i];
		s[i] = s[size - 1 - i];
		s[size - 1 - i] = tempValue;
	}

}
